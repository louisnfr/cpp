#include "Span.hpp"

Span::Span(void) : _var(0)
{
}

Span::Span(Span const &src)
{
	*this = src;
}

Span	&Span::operator=(Span const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}

Span::~Span(void)
{
}

int	Span::getVar(void) const
{
	return (this->_var);
}

std::ostream	&operator<<(std::ostream &cout, Span const &i)
{
	cout << i.getVar();
	return (cout);
}
