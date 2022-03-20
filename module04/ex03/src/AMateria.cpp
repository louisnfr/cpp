#include "AMateria.hpp"

AMateria::AMateria(void) : _var(0)
{
}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
}

AMateria	&AMateria::operator=(AMateria const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}

AMateria::~AMateria(void)
{
}

int	AMateria::getVar(void) const
{
	return (this->_var);
}

std::ostream	&operator<<(std::ostream &cout, AMateria const &i)
{
	cout << i.getVar();
	return (cout);
}
