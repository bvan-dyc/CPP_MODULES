# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ContactBook.cpp                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvan-dyc <bvan-dyc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/03 22:53:24 by bvan-dyc          #+#    #+#              #
#    Updated: 2020/03/07 15:47:48 by bvan-dyc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include "ContactBook.h"

ContactBook::ContactBook() {
}

ContactBook::~ContactBook() {

}

void ContactBook::AddNewContact(Contact contact)
{
	if (contactCount < MAXCONTACTS)
	{
		contact.index = contactCount;
		contacts[contactCount] = contact;
		contactCount++;
	}
}

Contact ContactBook::GetContact(unsigned int index) {
	if (index < getBookSize())
		return (contacts[index]);
	else
		return(contacts[contactCount - 1]);
}

void ContactBook::DisplayFullContact(unsigned int index) {
	contacts[index].DisplayInfo();
}

void ContactBook::DisplayContactList()
{
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	for (int index = 0; index < contactCount; index++)
	{
		std::cout << std::setfill(' ') << std::setw(10) << contacts[index].index + 1 << "|";
		DisplayField(contacts[index].firstName);
		std::cout << "|";
		DisplayField(contacts[index].lastName);
		std::cout << "|";
		DisplayField(contacts[index].nickname);
		std::cout << std::endl;
	}
}

void ContactBook::DisplayField(std::string field)
{
	if (field.length() > 10)
	{
		field.erase(9);
		std::cout << field << ".";
	}
	else
	{
		std::cout << std::setfill(' ') << std::setw(10) << field;
	}
}

bool ContactBook::IsFull() {
	return (getBookSize() >= MAXCONTACTS);
}

unsigned int ContactBook::getBookSize() {
	return(contactCount);
}