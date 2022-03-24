/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:02:40 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/24 18:28:45 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	strToUpper(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		str[i] = toupper(str[i]);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; av[i]; i++)
	{
		strToUpper(av[i]);
		std::cout << av[i];
	}
	std::cout << std::endl;
	return (0);
}
