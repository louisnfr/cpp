/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:25:33 by lraffin           #+#    #+#             */
/*   Updated: 2022/04/28 01:58:28 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__

# include <iostream>

# define YLW	"\033[33m"
# define NOC	"\033[0m"

class OutOfRangeException : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("index is out of range");
		};
};

template<typename T>
class Array
{
	public:
		// constructors and destructor
		Array<T>(void);
		Array<T>(unsigned int n);
		Array<T>(Array<T> const &src);
		~Array<T>(void);
		// operator overloads
		Array<T>	&operator=(Array<T> const &rhs);
		T			&operator[](unsigned int index);
		// accessors
		unsigned int	size(void) const;
		T	*get_data(void) const;
	private:
		unsigned int	_n;
		T	*_data;
};

/*** constructors and destructor ***/

template<typename T>
Array<T>::Array(void)
{
	this->_n = 0;
	this->_data = 0;
	std::cout << "empty array created" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	this->_n = n;
	this->_data = new T[n];
	std::cout << "array of size " << n << " created" << std::endl;
}

template<typename T>
Array<T>::Array(Array<T> const &src) : _n(0)
{
	std::cout << "copy constructor" << std::endl;
	*this = src;
}

template<typename T>
Array<T>::~Array<T>(void)
{
	std::cout << "array destroyed" << std::endl;
	delete [] this->_data;
}

/*** operator overloads ***/

template<typename T>
Array<T>	&Array<T>::operator=(Array<T> const &rhs)
{
	std::cout << "assignation operator" << std::endl;
	if (this->_n > 0)
		delete [] this->_data;
	T *new_data = new T[rhs.size()];
	for (unsigned int i = 0; i < rhs.size(); i++)
		new_data[i] = rhs._data[i];
	this->_data = new_data;
	this->_n = rhs.size();
	return (*this);
}

template<typename T>
T	&Array<T>::operator[](unsigned int index)
{
	if (index >= this->_n)
		throw OutOfRangeException();
	return (this->_data[index]);
}

/*** accessors ***/

template<typename T>
unsigned int	Array<T>::size(void) const
{
	return (this->_n);
}

template<typename T>
T	*Array<T>::get_data(void) const
{
	return (this->_data);
}

/*** cout overload ***/

template<typename T>
std::ostream	&operator<<(std::ostream &o, Array<T> const &rhs)
{
	for (size_t i = 0; i < rhs.size(); i++)
		o << "[" << i << "] = " << rhs.get_data()[i] << std::endl;
	return (o);
}

#endif
