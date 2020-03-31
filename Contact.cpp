# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Contact.cpp                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvan-dyc <bvan-dyc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/03 22:53:24 by bvan-dyc          #+#    #+#              #
#    Updated: 2020/03/07 15:47:48 by bvan-dyc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include "Contact.h"

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
