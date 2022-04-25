/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 03:00:39 by lraffin           #+#    #+#             */
/*   Updated: 2022/04/25 17:35:45 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

struct Data
{
	int A;
	int B;
};

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data		data;
	uintptr_t	serial;
	Data		*copy;

	data.A = 42;
	data.B = 0;

	std::cout << "Address: " << &data << std::endl;
	std::cout << "Data: " << std::endl;
	std::cout << "A: " << data.A << std::endl;
	std::cout << "B: " << data.B << std::endl;

	serial = serialize(&data);
	std::cout << std::endl;

	std::cout << "Serial: " << serial << std::endl;

	copy = deserialize(serial);
	std::cout << std::endl;

	std::cout << "Address: " << copy << std::endl;
	std::cout << "Copy: " << std::endl;
	std::cout << "A: " << copy->A << std::endl;
	std::cout << "B: " << copy->B << std::endl;

	return (0);
}
