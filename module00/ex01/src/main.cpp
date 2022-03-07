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

# include <iostream>
# include "Contact.hpp"
# include "PhoneBook.hpp"

std::string	prompt(void)
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
	std::string	input;

	phonebook.display_contacts();
	while (true)
	{
		std::cout << "Enter an index: ";
		std::cin >> input;
		if (input >= "1" && input <= "8")
		{
			phonebook.contact[std::stoi(input) - 1].display_contact();
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
			phonebook.contact[i].fill_contact();
			i++;
		}
		else if (input == "SEARCH")
			search_contacts(phonebook);
		else if (input == "EXIT" || std::cin.eof())
			break ;
	}
	return (0);
}
