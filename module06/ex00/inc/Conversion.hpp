#ifndef __CONVERSION_HPP__
# define __CONVERSION_HPP__

# include <iostream>

class Conversion
{
	public:
		Conversion(void);
		Conversion(Conversion const &src);
		Conversion &operator=(Conversion const &rhs);
		~Conversion(void);
		int	getVar(void) const;
	private:
		int	_var;
};

std::ostream	&operator<<(std::ostream &o, Conversion const &i);

#endif
