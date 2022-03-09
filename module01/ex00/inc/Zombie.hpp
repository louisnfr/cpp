/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 02:12:34 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/09 02:59:10 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

# include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie(void);
		void announce(void);
	private:
		std::string _name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
