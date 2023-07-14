#ifndef ADDRESSBOOK_HPP
#define ADDRESSBOOK_HPP

#include <vector>
#include "../Contact/Contact.hpp"

class AddressBook {
private:
    std::vector<Contact> contacts;

public:
    void addContact(const Contact& contact);
    void displayContacts() const;
    void searchContact(const std::string& name) const;
    void deleteContact(const std::string& name);
};

#endif
