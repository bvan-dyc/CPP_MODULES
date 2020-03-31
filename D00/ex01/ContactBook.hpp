#pragma once
#include "Contact.hpp"
#include <string>
#include <vector>

#define MAXCONTACTS 8

class ContactBook
{
public:
	ContactBook(void);
	~ContactBook(void);
	Contact GetContact(unsigned int index);
	void AddNewContact(Contact contact);
	void DisplayFullContact(unsigned int index);
	void DisplayContactList();
	bool isFull();
	unsigned int getBookSize();

private:
	Contact contacts[MAXCONTACTS];
	unsigned int contactCount;
	void DisplayField(std::string field);
};
