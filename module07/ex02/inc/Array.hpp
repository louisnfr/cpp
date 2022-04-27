/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:25:33 by lraffin           #+#    #+#             */
/*   Updated: 2022/04/27 20:47:07 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__

# include <iostream>

template<typename T>
class Array
{
	public:
		Array<T>(void);
		Array<T>(unsigned int n);
		Array<T>(Array<T> const &src);
		Array<T>	&operator=(Array<T> const &rhs);
		T			&operator[](unsigned int index);
		~Array<T>(void);
		unsigned int	getSize(void) const;
		class OutOfRangeException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
	private:
		unsigned int	_n;
		T				*_content;
};

template<typename T>
Array<T>::Array(void)
{
	this->_n = 0;
	this->_content = 0;
	std::cout << "empty array created" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	this->_n = n;
	this->_content = new T[n];
	std::cout << "array of size " << n << " created" << std::endl;
}

template<typename T>
Array<T>::Array(Array<T> const &src) : _n(0)
{
	std::cout << "copy constructor" << std::endl;
	*this = src;
}

template<typename T>
Array<T>	&Array<T>::operator=(Array<T> const &rhs)
{
	std::cout << "assignation operator" << std::endl;
	if (this->_n > 0)
		delete [] this->_content;
	T *new_content = new T[rhs.getSize()];
	for (unsigned int i = 0; i < rhs.getSize(); i++)
		new_content[i] = rhs._content[i];
	this->_content = new_content;
	this->_n = rhs.getSize();
	return (*this);
}

template<typename T>
T	&Array<T>::operator[](unsigned int index)
{
	if (index > this->_n)
		throw OutOfRangeException();
	return (this->_content[index]);
}

template<typename T>
Array<T>::~Array<T>(void)
{
	std::cout << "array destroyed" << std::endl;
	delete [] this->_content;
}

template<typename T>
unsigned int	Array<T>::getSize(void) const
{
	return (this->_n);
}


template<typename T>
char const	*Array<T>::OutOfRangeException::what(void) const throw()
{
	return ("index is out of range");
}

#endif
