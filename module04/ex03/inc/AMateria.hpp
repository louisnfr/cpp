#ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP__

# include <iostream>

class AMateria
{
	public:
		AMateria(void);
		AMateria(AMateria const &src);
		AMateria &operator=(AMateria const &rhs);
		~AMateria(void);

		int	getVar(void) const;

	private:
		int	_var;
};

std::ostream	&operator<<(std::ostream &o, AMateria const &i);

#endif
