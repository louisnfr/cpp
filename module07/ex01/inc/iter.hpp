#ifndef __ITER_HPP__
# define __ITER_HPP__

# include <iostream>

class iter
{
	public:
		iter(void);
		iter(iter const &src);
		iter &operator=(iter const &rhs);
		~iter(void);
		int	getValue(void) const;
	private:
		int	_value;
};

std::ostream	&operator<<(std::ostream &o, iter const &i);

#endif
