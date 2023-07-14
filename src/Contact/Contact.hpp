#ifndef CONTACT_HPP
#define CONTACT_HPP

using namespace std;

#include <string>

class Contact {
  private:
    string name;
    string phoneNumber;
    string emailAddress;

  public:
    Contact(
      const string& name,
      const string& phoneNumber,
      const string& emailAddress
    );

    void setName(const string& newName);
    string getName() const;

    void setPhoneNumber(const string& newPhoneNumber);
    string getPhoneNumber() const;

    void setEmailAddress(const string& newEmailAddress);
    string getEmailAddress() const;
};

#endif