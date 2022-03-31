/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:03:18 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/31 17:20:03 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl		harl;
	std::string	input;

	std::cout << "(DEBUG, INFO, WARNING, ERROR)" << std::endl;
	std::cout << "Enter a level: ";
	std::cin >> input;
	harl.complain(input);
	return (0);
}
