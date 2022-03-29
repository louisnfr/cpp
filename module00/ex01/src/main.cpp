/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:21:02 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/06 15:21:02 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <limits>
#include "Contact.hpp"
#include "PhoneBook.hpp"

static std::string	prompt(void)
{
	std::string	input;

	std::cout << "*************************" << std::endl;
	std::cout << "*   Awesome PhoneBook   *" << std::endl;
	std::cout << "*   ADD, SEARCH, EXIT   *" << std::endl;
	std::cout << "*************************" << std::endl;
	std::cin >> input;
	return (input);
}

void	search_contacts(PhoneBook phonebook)
{
	int	input;

	phonebook.display_phonebook();
	while (true)
	{
		std::cout << "Enter an index: ";
		std::cin >> input;
		if (std::cin.eof())
			exit(0);
		else if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else if (input >= 1 && input <= 8)
		{
			phonebook.display_contact(input - 1);
			break ;
		}
	}
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;
	int			i;

	i = 0;
	while (true)
	{
		if (i == 8)
			i = 0;
		input = prompt();
		if (input == "ADD")
		{
			phonebook.fill_contact(i);
			i++;
		}
		else if (input == "SEARCH")
			search_contacts(phonebook);
		else if (input == "EXIT" || std::cin.eof())
			break ;
	}
	return (0);
}
