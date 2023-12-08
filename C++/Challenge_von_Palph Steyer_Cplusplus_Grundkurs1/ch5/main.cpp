#include <iostream>

#include "customer.h"
#include "creditcard.h"

int main() 
{
    Customer peter(Customer::State::Premium);
    Customer john(Customer::State::Standard);

    std::cout << "peter.mBalance = "<<std::endl;
    peter.showBalance();
    std::cout << "john.mBalance = "<<std::endl;
    john.showBalance();

    std::cout << "Each ist going to withdraw some Money: Frist 50, then 100 and finally 200" << std::endl;

    peter.withdrawMoney(50);    
    john.withdrawMoney(50);
    
    peter.withdrawMoney(100);    
    john.withdrawMoney(100);
    
    peter.withdrawMoney(200);    
    john.withdrawMoney(200);

    std::cout << "Balance after withdrawing:" << std::endl;
    std::cout << "Peter: " << std::endl;
    peter.showBalance();
    std::cout << "John: " << std::endl;
    john.showBalance();

    return 0;
}

