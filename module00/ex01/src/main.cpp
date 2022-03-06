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

int	main(void)
{
	PhoneBook phone;

	// phone.contact[0].id = 12;
	std::cout << phone.contact[0].id << std::endl;
	return (0);
}
