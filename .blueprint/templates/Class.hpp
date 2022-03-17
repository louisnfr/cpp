#ifndef __CLASS_HPP__
# define __CLASS_HPP__

# include <iostream>

class Class
{
	public:
		Class(void);
		Class(Class const &src);
		Class &operator=(Class const &rhs);
		~Class(void);

		int	getVar(void) const;

	private:
		int	_var;
};

std::ostream	&operator<<(std::ostream &o, Class const &i);

#endif
