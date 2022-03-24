#include "Data.hpp"

Data::Data(void) : _var(0)
{
}

Data::Data(Data const &src)
{
	*this = src;
}

Data	&Data::operator=(Data const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}

Data::~Data(void)
{
}

int	Data::getVar(void) const
{
	return (this->_var);
}

std::ostream	&operator<<(std::ostream &cout, Data const &i)
{
	cout << i.getVar();
	return (cout);
}
