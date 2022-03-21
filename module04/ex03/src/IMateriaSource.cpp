#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(void) : _var(0)
{
}

IMateriaSource::IMateriaSource(IMateriaSource const &src)
{
	*this = src;
}

IMateriaSource	&IMateriaSource::operator=(IMateriaSource const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}

IMateriaSource::~IMateriaSource(void)
{
}

int	IMateriaSource::getVar(void) const
{
	return (this->_var);
}

std::ostream	&operator<<(std::ostream &cout, IMateriaSource const &i)
{
	cout << i.getVar();
	return (cout);
}
