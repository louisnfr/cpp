/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 02:53:43 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/17 18:13:06 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	scav("Hercule");

	std::cout << std::endl;

	scav.attack("innocent man");
	scav.takeDamage(99);
	scav.beRepaired(150);
	std::cout << std::endl;
	scav.guardGate();
	std::cout << std::endl;
	scav.takeDamage(789);
	scav.beRepaired(150);
	std::cout << std::endl;
	return (0);
}
