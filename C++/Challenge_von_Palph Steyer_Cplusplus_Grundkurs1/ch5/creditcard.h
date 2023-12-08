#ifndef CREDITCARD_H
#define CREDITCARD_H

#include "customer.h"

class CreditCard

{
public:
    enum class State {
        New,
        Valid,
        TranferInProgress,
        Invalid,
        Error 
    };

    /**
     * @brief 
     * @return returns 
     */
    State getState() const;

    /**
     * @brief 
     * @return returns 
     */
    int getBalance() const;

    /**
     * @brief 
     * @param amnt
     */
    void changeAmnt(const int amnt);

    /**
     * @brief 
     */
    void showBalance();

private:
    State mState = State::New;
    int mBalance = 100; 
};

#endif 