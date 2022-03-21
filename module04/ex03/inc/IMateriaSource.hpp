#ifndef __IMATERIASOURCE_HPP__
# define __IMATERIASOURCE_HPP__

# include <iostream>

class IMateriaSource
{
	public:
		IMateriaSource(void);
		IMateriaSource(IMateriaSource const &src);
		IMateriaSource &operator=(IMateriaSource const &rhs);
		~IMateriaSource(void);

		int	getVar(void) const;

	private:
		int	_var;
};

std::ostream	&operator<<(std::ostream &o, IMateriaSource const &i);

#endif
