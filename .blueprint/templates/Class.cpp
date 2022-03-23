#include "Class.hpp"

Class::Class(void) : _value(0)
{
}

Class::Class(Class const &src)
{
	*this = src;
}

Class	&Class::operator=(Class const &rhs)
{
	this->_value = rhs.getValue();
	return (*this);
}

Class::~Class(void)
{
}

int	Class::getValue(void) const
{
	return (this->_value);
}

std::ostream	&operator<<(std::ostream &cout, Class const &i)
{
	cout << i.getValue();
	return (cout);
}
