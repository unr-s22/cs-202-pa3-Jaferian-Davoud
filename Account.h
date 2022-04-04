#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include "Money.h"
#include <vector>


class Account : public Money
{
	std::vector<Money*> deposit;
	std::vector<Money*> withdrawal;  	
	
public:

	Account(): Money(dollars,cents) {}
	
	[[maybe_unused]] int makeDeposit(Money);
	int makeWithdrawal(Money); 
	
};

#endif //ACCOUNT_H
