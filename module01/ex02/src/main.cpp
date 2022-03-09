/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:45:07 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/09 17:04:32 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "value of string:\t" << string << std::endl;
	std::cout << "addr. of string:\t" << &string << std::endl;
	std::cout << std::endl;
	std::cout << "value of stringPTR:\t" << *stringPTR << std::endl;
	std::cout << "addr. of stringPTR:\t" << stringPTR << std::endl;
	std::cout << std::endl;
	std::cout << "value of stringREF:\t" << stringREF << std::endl;
	std::cout << "addr. of stringREF:\t" << &stringREF << std::endl;
	return (0);
}
