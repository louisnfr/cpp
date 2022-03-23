/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:33:01 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/22 21:47:03 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("Presidential", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
	: AForm(src)
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	AForm::operator=(rhs);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

void	PresidentialPardonForm::execute(void) const
{
	std::cout << this->_target << " was forgiven by Zaphod Beeblebrox" << std::endl;
}
