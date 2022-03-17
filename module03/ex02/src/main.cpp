/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 02:53:43 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/17 20:24:20 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	frag("Hercule");

	std::cout << std::endl;

	frag.attack("innocent man");
	frag.takeDamage(99);
	frag.repair(150);
	std::cout << std::endl;
	frag.highFivesGuys();
	std::cout << std::endl;
	frag.takeDamage(789);
	frag.repair(150);
	std::cout << std::endl;
	return (0);
}
