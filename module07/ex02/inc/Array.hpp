#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__

# include <iostream>

class Array
{
	public:
		Array(void);
		Array(Array const &src);
		Array &operator=(Array const &rhs);
		~Array(void);
		int	getValue(void) const;
	private:
		int	_value;
};

std::ostream	&operator<<(std::ostream &o, Array const &i);

#endif
