# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ContactBook.hpp                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvan-dyc <bvan-dyc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/03 22:53:24 by bvan-dyc          #+#    #+#              #
#    Updated: 2020/03/07 15:47:48 by bvan-dyc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#pragma once
#include "Contact.h"
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
	unsigned int contactCount = 0;
	void DisplayField(std::string field);
};
