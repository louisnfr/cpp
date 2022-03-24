/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:19:53 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/24 00:56:12 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

#include <cmath>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		Conversion	convert(av[1]);
		convert.display();
	}
	else
		std::cerr << "error: bad arguments" << std::endl;
	return (0);
}
