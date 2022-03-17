/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:51:13 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/17 20:30:15 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP__
# define __DIAMONDTRAP_HPP__

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(std::string const name);
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap &operator=(DiamondTrap const &rhs);
		~DiamondTrap(void);

	private:
		std::string const	_name;
};

std::ostream	&operator<<(std::ostream &o, DiamondTrap const &i);

#endif
