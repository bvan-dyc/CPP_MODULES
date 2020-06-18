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
	Contact GetContact(int index);
	void AddNewContact(Contact contact);
	void DisplayFullContact(int index);
	void DisplayContactList();
	bool isFull();
	int getBookSize();

private:
	Contact contacts[MAXCONTACTS];
	int contactCount;
	void DisplayField(std::string field);
};
