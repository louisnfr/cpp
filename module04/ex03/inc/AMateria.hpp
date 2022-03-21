/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 01:47:02 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/21 02:19:14 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP__

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	public:
		AMateria(std::string const &type);
		AMateria(AMateria const &src);
		AMateria &operator=(AMateria const &rhs);
		virtual ~AMateria(void);
		std::string const	&getType(void) const;
		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);
	protected:
		std::string	_type;
};

std::ostream	&operator<<(std::ostream &o, AMateria const &i);

#endif
