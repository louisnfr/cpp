/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 02:53:43 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/17 04:07:22 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	man("Louis");
	ClapTrap	guy(man);

	std::cout << std::endl;

	man.attack("another guy");
	man.takeDamage(100);
	man.attack("");
	man.takeDamage(100);

	std::cout << std::endl;

	guy.takeDamage(9);
	guy.beRepaired(9);
	for (int i = 10; i; i--)
		guy.attack("nobody");

	std::cout << std::endl;

	return (0);
}
