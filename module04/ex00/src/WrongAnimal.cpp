#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _var(0)
{
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	*this = src;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
}

int	WrongAnimal::getVar(void) const
{
	return (this->_var);
}

std::ostream	&operator<<(std::ostream &cout, WrongAnimal const &i)
{
	cout << i.getVar();
	return (cout);
}
