/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:51:13 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/17 18:35:03 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string const name);
		FragTrap(FragTrap const &src);
		FragTrap &operator=(FragTrap const &rhs);
		~FragTrap(void);

		void	attack(std::string const &target);
		void	highFivesGuys(void);
};

std::ostream	&operator<<(std::ostream &o, FragTrap const &i);

#endif
