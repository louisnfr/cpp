/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 02:45:14 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/21 02:46:36 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__

# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
		Character(Character const &src);
		Character &operator=(Character const &rhs);
		~Character(void);
		std::string const	&getName(void) const;
	private:
		std::string	_name;
};

std::ostream	&operator<<(std::ostream &o, Character const &i);

#endif
