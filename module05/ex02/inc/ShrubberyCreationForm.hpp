#ifndef __SHRUBBERYCREATIONFORM_HPP__
# define __SHRUBBERYCREATIONFORM_HPP__

# include <iostream>

class ShrubberyCreationForm
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
		~ShrubberyCreationForm(void);
		int	getVar(void) const;
	private:
		int	_var;
};

std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm const &i);

#endif
