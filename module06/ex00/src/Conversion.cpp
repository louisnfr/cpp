/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:28:00 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/24 02:43:37 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(char const *s)
{
	this->_charNonPrintable = false;
	this->_charImpossible = false;
	this->_intImpossible = false;

	// find the type of variable
	if (isInt(s) == false && isFloat(s) == false
		&& isDouble(s) == false && isChar(s) == false)
		this->_type = ERROR;
	// cast other values based on type found
	setValues();
	// set flags for int and char
	setFlags();
}

Conversion::Conversion(Conversion const &src)
{
	*this = src;
}

Conversion	&Conversion::operator=(Conversion const &rhs)
{
	this->_int = rhs._int;
	this->_float = rhs._float;
	this->_double = rhs._double;
	this->_char = rhs._char;
	this->_type = rhs._type;
	this->_intImpossible = rhs._intImpossible;
	this->_charImpossible = rhs._charImpossible;
	this->_charNonPrintable = rhs._charNonPrintable;
	return (*this);
}

bool	Conversion::isInt(char const *input)
{
	char	*endptr = NULL;
	long	i = strtol(input, &endptr, 10);

	if (*endptr || i > INT_MAX || i < INT_MIN)
		return (false);
	this->_type = INT;
	this->_int = static_cast<int>(i);
	return (true);
}

bool	Conversion::isFloat(char const *input)
{
	char	*endptr = NULL;
	float	f = strtof(input, &endptr);

	if (*endptr != 'f' || *(endptr + 1) != 0)
		return (false);
	this->_type = FLOAT;
	this->_float = f;
	return (true);
}

bool	Conversion::isDouble(char const *input)
{
	char	*endptr = NULL;
	double	d = strtod(input, &endptr);

	if (*endptr)
		return (false);
	this->_type = DOUBLE;
	this->_double = d;
	return (true);
}

bool	Conversion::isChar(char const *input)
{
	char	c = input[0];

	if (input[1] != 0 || !std::isprint(c))
		return (false);
	this->_char = c;
	this->_type = CHAR;
	return (true);
}

void	Conversion::setValues(void)
{
	switch (_type)
	{
		case CHAR:
			this->_int = static_cast<int>(_char);
			this->_float = static_cast<float>(_char);
			this->_double = static_cast<double>(_char);
			break ;
		case INT:
			this->_char = static_cast<char>(_int);
			this->_float = static_cast<float>(_int);
			this->_double = static_cast<double>(_int);
			break ;
		case FLOAT:
			this->_char = static_cast<char>(_float);
			this->_int = static_cast<int>(_float);
			this->_double = static_cast<double>(_float);
			break ;
		case DOUBLE:
			this->_char = static_cast<char>(_double);
			this->_int = static_cast<int>(_double);
			this->_float = static_cast<float>(_double);
			break ;
		default:
			this->_charImpossible = true;
			this->_intImpossible = true;
			this->_float = NAN;
			this->_double = NAN;
			break ;
	}
}

void	Conversion::setFlags(void)
{
	double	d = this->_double;

	if (d < INT_MIN || d > INT_MAX || std::isnan(d) || std::isinf(d))
	{
		this->_charImpossible = true;
		this->_intImpossible = true;
	}
	else if (d < CHAR_MIN || d > CHAR_MAX)
		this->_charImpossible = true;
	else if (!std::isprint(this->_char))
		this->_charNonPrintable = true;
}

void	Conversion::display(void)
{
	std::cout << std::fixed << std::setprecision(1);

	std::cout << "char: ";
	if (this->_charImpossible)
		std::cout << "impossible" << std::endl;
	else if (this->_charNonPrintable)
		std::cout << "non displayable" << std::endl;
	else
		std::cout << _char << std::endl;

	std::cout << "int: ";
	if (_intImpossible)
		std::cout << "impossible" << std::endl;
	else
		std::cout << _int << std::endl;

	std::cout << "float: " << _float << "f" << std::endl;
	std::cout << "double: " << _double << std::endl;
}
