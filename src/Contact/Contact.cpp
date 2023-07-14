#include "./Contact.hpp"

using namespace std;

Contact::Contact(const std::string& name, const std::string& phoneNumber, const std::string& emailAddress)
    : name(name), phoneNumber(phoneNumber), emailAddress(emailAddress) {}

void Contact::setName(const string& newName) {
  name = newName;
}

string Contact::getName() const {
  return name;
}

void Contact::setPhoneNumber(const string& newPhoneNumber) {
  phoneNumber = newPhoneNumber;
}

string Contact::getPhoneNumber() const {
  return phoneNumber;
}

void Contact::setEmailAddress(const string& newEmailAddress) {
  emailAddress = newEmailAddress;
}

string Contact::getEmailAddress() const {
  return emailAddress;
}