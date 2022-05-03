/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:56:16 by lraffin           #+#    #+#             */
/*   Updated: 2022/04/26 14:31:06 by lraffin          ###   ########.fr       */
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
	int	rand = std::rand() % 3;

	switch (rand)
	{
		case 0:
			std::cout << "class A generated" << std::endl;
			return (new A);
		case 1:
			std::cout << "class B generated" << std::endl;
			return (new B);
		case 2:
			std::cout << "class C generated" << std::endl;
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
	try
	{
		A classA = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch(std::exception & e) {}
	try
	{
		B classB = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch(std::exception & e) {}
	try
	{
		C classC = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch(std::exception & e) {}
}

int	main(void)
{
	srand(time(NULL));

	Base	*p1 = generate();
	Base	&p2 = *p1;

	std::cout << std::endl;

	std::cout << "ptr identified: ";
	identify(p1);
	std::cout << "ref identified: ";
	identify(p2);

	delete p1;

	return (0);
}
