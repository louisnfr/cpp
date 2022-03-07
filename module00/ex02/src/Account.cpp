/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 00:09:51 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/08 00:23:38 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	return ;
}

Account::~Account(void)
{
	return ;
}

void	Account::makeDeposit(int deposit)
{
}

bool	Account::makeWithdrawal(int withdrawal)
{
}

// consts tutorial
// https://elearning.intra.42.fr/notions/piscine-c-d00-c-basics/subnotions/piscine-c-d00-c-basics-const/videos/const-c0f10448-8fd3-4a06-83ed-abcce68c18a1

int		Account::checkAmount(void) const

}

void	Account::displayStatus(void) const
{
}

void	Account::displayAccountsInfos(void)
{
}
