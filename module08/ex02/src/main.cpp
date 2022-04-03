/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:23:47 by lraffin           #+#    #+#             */
/*   Updated: 2022/04/03 18:25:32 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void)
{
	// MutantStack<int> mstack;

	// mstack.push(5);
	// mstack.push(17);

	// std::cout << mstack.top() << std::endl;

	// mstack.pop();

	// std::cout << mstack.size() << std::endl;

	// mstack.push(3);
	// mstack.push(5);
	// mstack.push(737);
	// //[...]
	// mstack.push(0);

	// MutantStack<int>::iterator it = mstack.begin();
	// MutantStack<int>::iterator ite = mstack.end();
	// ++it;
	// --it;

	// while (it != ite)
	// {
	// 	std::cout << *it << std::endl;
	// 	++it;
	// }

	// std::stack<int> s(mstack);

	return (0);
}

/*
Si vous l’exécutez une première fois avec votre MutantStack, puis une seconde fois en
remplaçant la MutantStack, par exemple par std::list, les deux résultats devront être
identiques. Bien sûr, lorsque vous testez cet exemple avec un autre container, modifiez le
code avec les fonctions membres correspondantes (push() peut devenir push_back()).
*/
