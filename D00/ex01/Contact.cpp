#include "Contact.hpp"

Contact::Contact() {

}

Contact::~Contact() {

}

void Contact::DisplayInfo(void)
{
	std::cout << firstName << std::endl;
	std::cout << lastName << std::endl;
	std::cout << nickname << std::endl;
	std::cout << login << std::endl;
	std::cout << postalAddress << std::endl;
	std::cout << emailAddress << std::endl;
	std::cout << phoneNumber << std::endl;
	std::cout << birthdayDate << std::endl;
	std::cout << favoriteMeal << std::endl;
	std::cout << underwearColor << std::endl;
	std::cout << darkestSecret << std::endl;
}
