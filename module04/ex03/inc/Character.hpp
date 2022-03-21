/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 02:45:14 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/21 20:13:36 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__

# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(std::string const &name = "default");
		Character(Character const &src);
		Character &operator=(Character const &rhs);
		virtual ~Character(void);
		std::string const	&getName(void) const;
		virtual void	equip(AMateria *m);
		virtual void	unequip(int idx);
		virtual void	use(int idx, ICharacter &target);
	private:
		std::string	_name;
		AMateria	*_inventory[4];
};

std::ostream	&operator<<(std::ostream &o, Character const &i);

#endif
