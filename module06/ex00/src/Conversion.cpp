#include "Conversion.hpp"

Conversion::Conversion(void) : _var(0)
{
}

Conversion::Conversion(Conversion const &src)
{
	*this = src;
}

Conversion	&Conversion::operator=(Conversion const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}

Conversion::~Conversion(void)
{
}

int	Conversion::getVar(void) const
{
	return (this->_var);
}

std::ostream	&operator<<(std::ostream &cout, Conversion const &i)
{
	cout << i.getVar();
	return (cout);
}
