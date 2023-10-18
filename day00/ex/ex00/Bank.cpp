#include "Bank.hpp"

Bank::Account::Account(int accountId, int accountValue) : id(accountId), value(accountValue) {}

int& Bank::Account::getId() {
    return id;
}

int& Bank::Account::getValue() {
    return value;
}


void Bank::Account::setId(int newId) {
    id = newId;
}

void Bank::Account::setValue(int newValue) {
    value = newValue;
}

Bank::Bank() : liquidity(0) , idCounter(1) {}

Bank::~Bank() {
    for (std::vector<Account*>::iterator it = clientAccounts.begin(); it != clientAccounts.end(); ++it) {
        delete *it;
    }
    clientAccounts.clear();
}

int& Bank::getLiquidity() {
    return liquidity;
}

void Bank::setLiquidity(int value) {
    liquidity = value;
}

const std::vector<Bank::Account*>& Bank::getClientAccounts() const {
    return clientAccounts;
}

void Bank::addClientAccount(int accountValue) {

	Account* account = new Account(Bank::generateAccountId(), accountValue);
    clientAccounts.push_back(account);
}

int Bank::generateAccountId() {
    return idCounter++;
}

void Bank::deleteAccount(int accountId) {

	for (std::vector<Account*>::iterator it = clientAccounts.begin(); it != clientAccounts.end(); ++it) {
        if ((*it)->getId() == accountId) {
            delete *it;  
            clientAccounts.erase(it);  
            std::cout << "Account with ID " << accountId << " excluded!" << std::endl;
            return;  
        }
    }

    std::cout << "Account with ID " << accountId << " NOT FOUND. Exclusion not succeded." << std::endl;

}

void Bank::modifyAccount(int accountId, int depositValue) {

    for (std::vector<Account*>::iterator it = clientAccounts.begin(); it != clientAccounts.end(); ++it) {
        if ((*it)->getId() == accountId) {
           
            int newValue = (*it)->getValue() + (depositValue - Bank::receiveTax(depositValue));
            (*it)->setValue(newValue);
            std::cout << "Add value " << depositValue << " on account [" << accountId << "] succeded." << std::endl;
            return;  
        }
    }

    std::cout << "Account with ID " << accountId << " NOT FOUND. Deposit not succeded." << std::endl;
}

int Bank::receiveTax(int depositValue) {
    if (depositValue >= 0) {
	    int tax = depositValue * 0.05;
	
	    Bank::setLiquidity(Bank::getLiquidity() + tax);
	
    	return tax;
    }
    else 
        return 0;
}

void Bank::giveLoan(int accountId, int loan) {
    for (std::vector<Account*>::iterator it = clientAccounts.begin(); it != clientAccounts.end(); ++it) {
        if ((*it)->getId() == accountId) {
           
            if ( (*it)->getValue() >=  Bank::getLiquidity() ) {
                std::cout << "Loan not approved" << std::endl;
            } else {
               
                int newValue = ((*it)->getValue() + loan);
                (*it)->setValue(newValue);
                Bank::setLiquidity(Bank::getLiquidity() - loan);
                std::cout << "Loan value of "<< loan << " approved for account ID "<< accountId << std::endl;
            }
            
            return;  
        }
    }
    std::cout << "Account ID " << accountId << " NOT FOUND." << std::endl;
        return;
    

}


std::ostream& operator<<(std::ostream& os, const Bank& bank) {
    os << "Bank information: " << std::endl;
    os << "Liquidity: " << bank.liquidity << std::endl;

    for (std::vector<Bank::Account*>::const_iterator it = bank.clientAccounts.begin(); it != bank.clientAccounts.end(); ++it) {
        os << "[" << (*it)->getId() << "] - [" << (*it)->getValue() << "]" << std::endl;
    }

    return os;
}
