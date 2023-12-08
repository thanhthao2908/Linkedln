#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "creditcard.h"

class Customer

{
public:
    enum class State {
        New,
        Standard,
        Premium 
    };

    /**
     * @brief Customer 
     */
    Customer(const State state);

    /**
     * @brief 
     * @return returns 
     */
    bool verifyStatus();

    /**
     * @brief 
     * @param amnt
     */
    void withdrawMoney(const int amnt);

    /**
     * @brief 
     */
    void showBalance();

private:
    State mState = State::New;
    CreditCard mCreditCard;

};

#endif 