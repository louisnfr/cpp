#ifndef __CLASS_HPP__
# define __CLASS_HPP__

# include <iostream>

class Class
{
	public:
		Class(void);
		Class(Class const &src);
		~Class(void);

		Class	&operator=(Class const &rhs);

		int	getVar(void) const;

	private:
		int	_var;
};

#endif
