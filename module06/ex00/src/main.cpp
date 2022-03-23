/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:19:53 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/23 16:26:38 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int	main(int ac, char **av)
{
	static_cast<void>(av);
	if (ac != 2)
	{
		std::cerr << "error" << std::endl;
		return (0);
	}
	return (0);
}
