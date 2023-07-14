#include "AddressBook.hpp"
#include <iostream>
#include <algorithm>

using namespace std;

void AddressBook::addContact(const Contact& contact) {
    contacts.push_back(contact);
    cout << "Contact added successfully.\n";
}

void AddressBook::displayContacts() const {
    if (contacts.empty()) {
        cout << "Address book is empty.\n";
        return;
    }

    cout << "Address Book:\n";
    for (const auto& contact : contacts) {
        cout << "Name: " << contact.getName() << "\n";
        cout << "Phone Number: " << contact.getPhoneNumber() << "\n";
        cout << "Email Address: " << contact.getEmailAddress() << "\n";
        cout << "----------------\n";
    }
}

void AddressBook::searchContact(const string& name) const {
    bool found = false;
    for (const auto& contact : contacts) {
        if (contact.getName() == name) {
            cout << "Contact found:\n";
            cout << "Name: " << contact.getName() << "\n";
            cout << "Phone Number: " << contact.getPhoneNumber() << "\n";
            cout << "Email Address: " << contact.getEmailAddress() << "\n";
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Contact not found.\n";
    }
}

void AddressBook::deleteContact(const string& name) {
    auto it = find_if(contacts.begin(), contacts.end(), [name](const Contact& contact) {
        return contact.getName() == name;
    });

    if (it != contacts.end()) {
        contacts.erase(it);
        cout << "Contact deleted successfully.\n";
    } else {
        cout << "Contact not found.\n";
    }
}
