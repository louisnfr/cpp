#ifndef __SPAN_HPP__
# define __SPAN_HPP__

# include <iostream>

class Span
{
	public:
		Span(void);
		Span(Span const &src);
		Span &operator=(Span const &rhs);
		~Span(void);
		int	getVar(void) const;
	private:
		int	_var;
};

std::ostream	&operator<<(std::ostream &o, Span const &i);

#endif
