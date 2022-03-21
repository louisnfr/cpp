#ifndef __MATERIASOURCE_HPP__
# define __MATERIASOURCE_HPP__

# include <iostream>

class MateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &src);
		MateriaSource &operator=(MateriaSource const &rhs);
		~MateriaSource(void);

		int	getVar(void) const;

	private:
		int	_var;
};

std::ostream	&operator<<(std::ostream &o, MateriaSource const &i);

#endif
