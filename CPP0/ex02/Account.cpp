/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:26:08 by user42            #+#    #+#             */
/*   Updated: 2022/04/19 16:49:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account( int initial_deposit ) : _accountIndex(Account::_nbAccounts), _amount(initial_deposit),
											_nbDeposits(0), _nbWithdrawals(0)
{
/*	Account::_nbAccounts++;
	Account::_totalAmount = Account::_totalAmount + Account::checkAmount();
	*/
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created;";
	std::cout << std::endl;
    return;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed;";
	std::cout << std::endl;
/*	Account::_nbAccounts--;
	Account::_totalAmount = Account::_totalAmount - Account::checkAmount();
	*/
	return;
}

int Account::getNbAccounts( void )
{
    return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (Account::_totalNbWithdrawals);
}

void Account::_displayTimestamp(void)
{
	std::cout << "[19920104_091532]";
}

void	makeDeposit( int deposit )
{
	
}

bool	makeWithdrawal( int withdrawal )
{
	
}

void Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << "amount:" << Account::getTotalAmount();
	std::cout << "deposits:" << Account::getNbDeposits();
	std::cout << "withdrawals:" << Account::getNbWithdrawals();
	std::cout << std::endl;
}

void Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts();
	std::cout << "total:" << Account::getTotalAmount();
	std::cout << "deposits:" << Account::getNbDeposits();
	std::cout << "withdrawals:" << Account::getNbWithdrawals();
	std::cout << std::endl;
}
