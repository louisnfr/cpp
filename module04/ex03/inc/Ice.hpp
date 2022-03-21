#ifndef __ICE_HPP__
# define __ICE_HPP__

# include <iostream>

class Ice
{
	public:
		Ice(void);
		Ice(Ice const &src);
		Ice &operator=(Ice const &rhs);
		~Ice(void);

		int	getVar(void) const;

	private:
		int	_var;
};

std::ostream	&operator<<(std::ostream &o, Ice const &i);

#endif
