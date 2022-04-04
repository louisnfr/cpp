/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 02:12:19 by lraffin           #+#    #+#             */
/*   Updated: 2022/04/04 13:30:42 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie_s = Zombie("Stack");
	Zombie	*zombie_h = newZombie("Heap");

	zombie_s.announce();
	zombie_h->announce();
	randomChump("Chump");
	delete zombie_h;
	return (0);
}
