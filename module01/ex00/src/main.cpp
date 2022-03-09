/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 02:12:19 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/09 03:00:20 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie_s = Zombie("Stack");
	Zombie	*zombie_h = newZombie("Heap");

	randomChump("Chump");
	zombie_h->announce();
	zombie_s.announce();
	delete zombie_h;
	return (0);
}
