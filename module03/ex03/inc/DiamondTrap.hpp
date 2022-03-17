/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:51:13 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/17 19:42:24 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP__
# define __DIAMONDTRAP_HPP__

# include "ClapTrap.hpp"

class DiamondTrap : public ClapTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(std::string const name);
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap &operator=(DiamondTrap const &rhs);
		~DiamondTrap(void);

		void	attack(std::string const &target);
		void	highFivesGuys(void);
};

std::ostream	&operator<<(std::ostream &o, DiamondTrap const &i);

#endif
