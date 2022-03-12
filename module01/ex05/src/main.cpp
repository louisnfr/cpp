/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:03:18 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/12 23:58:04 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen		karen;
	std::string	input;

	std::cout << "(DEBUG, INFO, WARNING, ERROR)" << std::endl;
	std::cout << "Enter a level: ";
	std::cin >> input;
	karen.complain(input);
	return (0);
}
