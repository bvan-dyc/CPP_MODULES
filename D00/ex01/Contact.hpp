#pragma once
#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
public:
	Contact(void);
	~Contact(void);
	int			index = 0;
	void		DisplayInfo(void);
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	login;
	std::string	postalAddress;
	std::string	emailAddress;
	std::string	phoneNumber;
	std::string	birthdayDate;
	std::string	favoriteMeal;
	std::string	underwearColor;
	std::string	darkestSecret;
};
