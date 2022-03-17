/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 02:53:43 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/17 22:45:05 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	diam("louis");

	std::cout << std::endl;

	diam.guardGate();
	diam.highFivesGuys();
	diam.whoAmI();

	std::cout << std::endl;

	diam.takeDamage(14);
	diam.repair(15);
	diam.attack("jeae");

	std::cout << std::endl;

	return (0);
}
