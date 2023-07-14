#include <iostream>
#include "Contact/Contact.hpp"
#include "AddressBook/AddressBook.hpp"

int main() {
    // Create some contact objects
    Contact contact1("John Doe", "123456789", "john@example.com");
    Contact contact2("Jane Smith", "987654321", "jane@example.com");
    Contact contact3("Bob Johnson", "555555555", "bob@example.com");

    // Create an address book object
    AddressBook addressBook;

    // Add contacts to the address book
    addressBook.addContact(contact1);
    addressBook.addContact(contact2);
    addressBook.addContact(contact3);

    // Display all contacts in the address book
    addressBook.displayContacts();

    // Search for a contact by name
    addressBook.searchContact("Jane Smith");

    // Delete a contact by name
    addressBook.deleteContact("John Doe");

    // Display the updated contacts
    addressBook.displayContacts();

    return 0;
}
