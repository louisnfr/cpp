/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:14:27 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/22 21:40:53 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("Shrubbery", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
	: AForm(src)
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	AForm::operator=(rhs);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

void	ShrubberyCreationForm::execute(void) const
{
	std::ofstream	outfile;
	std::string		filename = this->_target + "_shrubbery";

	outfile.open(filename.c_str());
	if (outfile.fail())
		throw ShrubberyCreationForm::FailedToOpenFileException();
	outfile << "                                              ." << std::endl;
	outfile << "                                   .         ;" << std::endl;
	outfile << "      .              .              ;%     ;;" << std::endl;
	outfile << "        ,           ,                :;%  %;" << std::endl;
	outfile << "         :         ;                   :;%;'     .," << std::endl;
	outfile << ",.        %;     %;            ;        %;'    ,;" << std::endl;
	outfile << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	outfile << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
	outfile << "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	outfile << "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	outfile << "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	outfile << "         `:%;.  :;bd%;          %;@%;'" << std::endl;
	outfile << "           `@%:.  :;%.         ;@@%;'" << std::endl;
	outfile << "             `@%.  `;@%.      ;@@%;" << std::endl;
	outfile << "               `@%%. `@%%    ;@@%;" << std::endl;
	outfile << "                 ;@%. :@%%  %@@%;" << std::endl;
	outfile << "                   %@bd%%%bd%%:;" << std::endl;
	outfile << "                     #@%%%%%:;;" << std::endl;
	outfile << "                     %@@%%%::;" << std::endl;
	outfile << "                     %@@@%(o);  . '" << std::endl;
	outfile << "                     %@@@o%;:(.,'" << std::endl;
	outfile << "                 `.. %@@@o%::;" << std::endl;
	outfile << "                    `)@@@o%::;" << std::endl;
	outfile << "                     %@@(o)::;" << std::endl;
	outfile << "                    .%@@@@%::;" << std::endl;
	outfile << "                    ;%@@@@%::;." << std::endl;
	outfile << "                   ;%@@@@%%:;;;." << std::endl;
	outfile << "               ...;%@@@@@%%:;;;;,.." << std::endl;
	outfile.close();
}

char const	*ShrubberyCreationForm::FailedToOpenFileException::what(void) const throw()
{
	return ("failed to open file");
}
