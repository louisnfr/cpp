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
	std::string choice;

	std::cout << "*************************" << std::endl;
	std::cout << "*   Awesome PhoneBook   *" << std::endl;
	std::cout << "*   ADD, SEARCH, EXIT   *" << std::endl;
	std::cout << "*************************" << std::endl;
	std::cin >> choice;
	return (choice);
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	choice;
	int			i;

	i = 0;
	while (true)
	{
		if (i == 8)
			i = 0;
		choice = prompt();
		if (choice == "ADD")
			phonebook.contact[i].
		else if (choice == "SEARCH")
			break ;
		else if (choice == "EXIT")
			break ;
		else
			std::cout << "Wrong input, try again" << std::endl;
		i++;
	}
	return (0);
}
