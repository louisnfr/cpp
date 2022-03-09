/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:10:09 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/09 17:19:44 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
# define __WEAPON_H__

#include <iostream>

class Weapon
{
	public:
		Weapon(void);
		~Weapon(void);
		const std::string	&getType(void);
		void				setType(std::string type);
	private:
		std::string	_type;
};

#endif
