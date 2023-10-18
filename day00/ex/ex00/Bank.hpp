#ifndef BANK_HPP
#define BANK_HPP

#include <iostream>
#include <vector>

class Bank {
private:
    class Account {
    private:
        int id;
        int value;

    public:
        Account(int accountId, int accountValue);

        int& getId();
        int& getValue();
        void setId(int newId);
        void setValue(int newValue);

        friend class Bank;  
    };

    int liquidity;
    std::vector<Account*> clientAccounts;
    int receiveTax(int depositValue);
    int idCounter;  
    int generateAccountId();  


public:
    Bank();
    ~Bank();

    int& getLiquidity();
    void setLiquidity(int value);
    const std::vector<Account*>& getClientAccounts() const;
    void addClientAccount(int accountValue);
    void modifyAccount(int accountId, int depositValue);
    void deleteAccount(int accountId);
    Account* searchAccountById(int accountId);
    void giveLoan(int accountId, int loan);

    friend std::ostream& operator<<(std::ostream& os, const Bank& bank);
};

#endif // BANK_HPP
