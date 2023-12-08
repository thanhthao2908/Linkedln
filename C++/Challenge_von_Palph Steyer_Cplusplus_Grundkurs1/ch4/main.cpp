#include <iostream>

enum class CustomerState {
    New,
    Standard,
    Premium
};

enum class CreditCardState {
    New,
    Valid,
    TranferInProgress,
    Invalid,
    Error
};

struct CreditCard {
    CreditCardState mState = CreditCardState::New;
    int mBalance = 100;
};

struct Customer {
    CustomerState mState = CustomerState::New;
    CreditCard mCreditCard;
};

bool verifyStatus(const Customer &cust) {
    
    if (cust.mCreditCard.mState != CreditCardState::Valid)
        return false;

    if (cust.mState == CustomerState::Premium) 
        return true;

    if (cust.mCreditCard.mBalance < 0) 
        return false;

    return true;
}

void withdrawMoney(Customer &cust, const int amnt) {
    
    if (!verifyStatus(cust)) {
        std::cout << "Die Tranksaktion kann leider nicht durchgefuert werden !" << std::endl;
        return;
    }
    cust.mCreditCard.mBalance -=  amnt;
}

void showBalance(const CreditCard &card) {
    std::cout << "mBalance = " << card.mBalance << std::endl;
}

int main() 
{
    Customer peter;
    Customer john;

    peter.mState = CustomerState::Premium;
    peter.mCreditCard.mState = CreditCardState::Valid;
    john.mState = CustomerState::Standard;
    john.mCreditCard.mState = CreditCardState::Valid;

    std::cout << "peter.mBalance = "<<std::endl;
    showBalance(peter.mCreditCard);
    std::cout << "john.mBalance = "<<std::endl;
    showBalance(john.mCreditCard);

    std::cout << "Each ist going to withdraw some Money: Frist 50, then 100 and finally 200" << std::endl;

    withdrawMoney(peter, 50);    
    withdrawMoney(john, 50);
    
    withdrawMoney(peter, 100);    
    withdrawMoney(john, 100);
    
    withdrawMoney(peter, 200);    
    withdrawMoney(john, 200);

    std::cout << "Balance after withdrawing:" << std::endl;
    std::cout << "Peter: " << std::endl;
    showBalance(peter.mCreditCard);
    std::cout << "John: " << std::endl;
    showBalance(john.mCreditCard);

    return 0;
}
