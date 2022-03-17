#include "WrongCat.hpp"

WrongCat::WrongCat(void) : _var(0)
{
}

WrongCat::WrongCat(WrongCat const &src)
{
	*this = src;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}

WrongCat::~WrongCat(void)
{
}

int	WrongCat::getVar(void) const
{
	return (this->_var);
}

std::ostream	&operator<<(std::ostream &cout, WrongCat const &i)
{
	cout << i.getVar();
	return (cout);
}
