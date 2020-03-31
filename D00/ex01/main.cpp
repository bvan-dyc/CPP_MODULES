#include "ContactBook.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <itoa>

void AddNewContact(ContactBook& book)
{
	if (book.isFull())
		std::cout << "Contactbook is full; please reboot if you want to make a new one."<< std::endl;
	else
	{
		Contact contact = Contact();
		std::cout << "Please enter your first name" << std::endl;
		std::getline(std::cin, contact.firstName);
		std::cout << "Please enter your last name" << std::endl;
		std::getline(std::cin, contact.lastName);
		std::cout << "Please enter your nickname" << std::endl;
		std::getline(std::cin, contact.nickname);
		std::cout << "Please enter your login" << std::endl;
		std::getline(std::cin, contact.login);
		std::cout << "Please enter your postal address" << std::endl;
		std::getline(std::cin, contact.postalAddress);
		std::cout << "Please enter your email address" << std::endl;
		std::getline(std::cin, contact.emailAddress);
		std::cout << "Please enter your phone number" << std::endl;
		std::getline(std::cin, contact.phoneNumber);
		std::cout << "Please enter your birthday date" << std::endl;
		std::getline(std::cin, contact.birthdayDate);
		std::cout << "Please enter your favorite meal" << std::endl;
		std::getline(std::cin, contact.favoriteMeal);
		std::cout << "Please enter your underwear color" << std::endl;
		std::getline(std::cin, contact.underwearColor);
		std::cout << "Please enter your darkest secret" << std::endl;
		std::getline(std::cin, contact.darkestSecret);
		book.AddNewContact(contact);
		std::cout << "Thanks for your time. Contact has been added." << std::endl;
	}
}

int main(void)
{
	std::string		line;
	ContactBook		book;

	std::cout << "Please enter either ADD, SEARCH or EXIT" << std::endl;
	while (line != "EXIT")
	{
		std::getline(std::cin, line);
		if (line == "ADD")
		{
			AddNewContact(book);
			std::cout << "Please enter either ADD, SEARCH or EXIT" << std::endl;
		}
		else if (line == "SEARCH")
		{
			if (book.getBookSize() > 0)
			{
				unsigned int	index = 0;
				char*			buffer;
				book.DisplayContactList();
				std::cout << "Input the index of the contact you want to display information of." << std::endl;
				std::cin >> buffer;
				index = std::atoi(buffer);
				book.DisplayFullContact(index);
				std::cout << "Please enter either ADD, SEARCH or EXIT" << std::endl;
			}
			else
				std::cout << "Book is empty." << std::endl;
		}
	}
	std::cout << "THANK YOU FOR USING CONTACTBOOK" << std::endl;
	return 0;
}
