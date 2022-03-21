/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 01:56:41 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/21 20:57:48 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main(void)
{
	IMateriaSource	*src = new MateriaSource;

	src->learnMateria(new Ice);
	src->learnMateria(new Cure);

	ICharacter	*me = new Character("me");
	AMateria	*tmp;

	std::cout << std::endl;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << std::endl;

	ICharacter	*bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;

	me->use(3, *me);
	me->use(42, *me);
	me->use(-42, *bob);

	me->unequip(1);
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;

	delete tmp;
	delete bob;
	delete me;

	std::cout << std::endl;

	Character	copy;

	copy.equip(src->createMateria("ice"));
	copy.equip(src->createMateria("fire"));
	copy.equip(src->createMateria("cure"));

	std::cout << std::endl;

	Character	copy2(copy);

	std::cout << std::endl;

	copy2.use(0, copy);
	copy2.use(1, copy);
	std::cout << std::endl;

	copy.use(0, copy);
	copy.use(1, copy);
	std::cout << std::endl;

	delete src;

	return (0);
}
