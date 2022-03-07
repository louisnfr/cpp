/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:59:19 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/06 15:59:19 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::fill_contact(void)
{
	std::cout << "> First name: ";
	std::cin >> this->firstname;
	std::cout << "> Last name: ";
	std::cin >> this->lastname;
	std::cout << "> Nickname: ";
	std::cin >> this->nickname;
	std::cout << "> Number: ";
	std::cin >> this->number;
	std::cout << "> Secret: ";
	std::cin >> this->secret;
}

void	Contact::print_string(std::string str)
{
	std::cout << std::setw(10);
	if (str.length() > 10)
		str = str.substr(0, 9) + ".";
	std::cout << str << "|";
}

void	Contact::display_names(void)
{
	print_string(this->firstname);
	print_string(this->lastname);
	print_string(this->nickname);
	std::cout << std::endl;
}

void	Contact::display_contact(void)
{
	std::cout << "> First name: " << this->firstname << std::endl;
	std::cout << "> Last name: " << this->lastname << std::endl;
	std::cout << "> Nickname: " << this->nickname << std::endl;
	std::cout << "> Number: " << this->number << std::endl;
	std::cout << "> Secret: " << this->secret << std::endl;
}
