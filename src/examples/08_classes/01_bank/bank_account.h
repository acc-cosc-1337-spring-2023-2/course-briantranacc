#include<stdlib.h>//for rand() function
#include<iostream>
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount //abstract class
{
friend void show_balance(const BankAccount &account);
friend std::ostream& operator<<(std::ostream& out, const BankAccount &account);

public:
    BankAccount(){get_balance_from_db();}
    BankAccount(int b) : balance(b){/*empty function code block*/}
    virtual int get_balance() const = 0;//pure virtual function
    void deposit(int amount);
    void withdraw(int amount);
protected:
    int balance{0};//explicitly initialize to zero
    
private:
    void get_balance_from_db();
};

#endif