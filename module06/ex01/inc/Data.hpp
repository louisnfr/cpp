#ifndef __DATA_HPP__
# define __DATA_HPP__

# include <iostream>

class Data
{
	public:
		Data(void);
		Data(Data const &src);
		Data &operator=(Data const &rhs);
		~Data(void);
		int	getVar(void) const;
	private:
		int	_var;
};

std::ostream	&operator<<(std::ostream &o, Data const &i);

#endif
