#include <iostream>

#include "customer.h"

Customer::Customer(const State state) :
mState(state)
{}


bool Customer::verifyStatus()
{
    if (mCreditCard.getState() != CreditCard::State::Valid)
        return false;

    if (mState == Customer::State::Premium) 
        return true;

    if (mCreditCard.getBalance() < 0) 
        return false;

    return true;
}

void Customer::withdrawMoney(const int amnt)
{
    if (!verifyStatus()) {
        std::cout << "Die Tranksaktion kann leider nicht durchgefuert werden !" << std::endl;
        return;
    }
    mCreditCard.changeAmnt(amnt);
}

