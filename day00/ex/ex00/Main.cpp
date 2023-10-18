#include <iostream>
#include "Bank.hpp"

int main() {
    Bank bank;
    bank.setLiquidity(999);

    bank.addClientAccount(100);
    bank.addClientAccount(100);
    bank.addClientAccount(100);
    bank.addClientAccount(100);
    bank.addClientAccount(100);
    bank.addClientAccount(100);
    bank.addClientAccount(100);
    bank.addClientAccount(100);
    bank.setLiquidity(bank.getLiquidity() - 200);

    bank.modifyAccount(5,-400);

    bank.deleteAccount(5);
    bank.modifyAccount(5,400);

    bank.giveLoan(4,700);
    

    std::cout << bank;


    return 0;
}
