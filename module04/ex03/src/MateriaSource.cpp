#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _var(0)
{
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
}

int	MateriaSource::getVar(void) const
{
	return (this->_var);
}

std::ostream	&operator<<(std::ostream &cout, MateriaSource const &i)
{
	cout << i.getVar();
	return (cout);
}
