/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 00:03:30 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/23 15:20:53 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	karen;

	if (ac != 2)
	{
		std::cerr << "Error: bad arguments" << std::endl;
		return (1);
	}
	karen.complain(av[1]);
	return (0);
}
