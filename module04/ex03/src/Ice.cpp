#include "Ice.hpp"

Ice::Ice(void) : _var(0)
{
}

Ice::Ice(Ice const &src)
{
	*this = src;
}

Ice	&Ice::operator=(Ice const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}

Ice::~Ice(void)
{
}

int	Ice::getVar(void) const
{
	return (this->_var);
}

std::ostream	&operator<<(std::ostream &cout, Ice const &i)
{
	cout << i.getVar();
	return (cout);
}
