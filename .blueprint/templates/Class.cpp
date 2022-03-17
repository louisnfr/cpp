#include "Class.hpp"

Class::Class(void) : _var(0)
{
}

Class::Class(Class const &src)
{
	*this = src;
}

Class	&Class::operator=(Class const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}

Class::~Class(void)
{
}

int	Class::getVar(void) const
{
	return (this->_var);
}
