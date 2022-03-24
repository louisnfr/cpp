/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:56:16 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/24 15:40:41 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>

class Base {public: virtual ~Base(void) {} };
class A: public Base {};
class B: public Base {};
class C: public Base {};

Base	*generate(void)
{
	srand(time(NULL));
	int	rand = std::rand() % 3;

	switch (rand)
	{
		case 0:
			std::cout << "A" << std::endl;
			return (new A);
		case 1:
			std::cout << "B" << std::endl;
			return (new B);
		case 2:
			std::cout << "C" << std::endl;
			return (new C);
		default:
			return (NULL);
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
}

int	main(void)
{
	Base	*p1 = generate();
	Base	*p2 = generate();

	std::cout << std::endl;

	std::cout << "pointer: ";
	identify(p1);
	std::cout << "ref: ";
	identify(*p2);
	return (0);
}
