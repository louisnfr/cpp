/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:02:40 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/03 02:21:04 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	int	i;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i = 0;
	while (++i < ac)
	{
		std::string str = av[i];
		std::transform(str.begin(), str.end(), str.begin(), ::toupper);
		std::cout << str;
		std::cout << " ";
	}
	std::cout << "\n";
	return (0);
}
