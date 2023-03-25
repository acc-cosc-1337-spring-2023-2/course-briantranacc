//atm.cpp
#include "atm.h"

using std::cout; using std::cin;

void display_menu()
{
    cout<<"\n\nACC COSC Bank\n\n";
    cout<<"1-Deposit\n";
    cout<<"2-Withdraw\n";
    cout<<"3-Balance\n";
    cout<<"4-Exit\n";
}

void run_menu(std::vector<std::unique_ptr<BankAccount>> &accounts)
{
    auto option = 0;

    auto choice = 0;

    cout<<"Checking(1) or Savings(2)";
    cin>>choice;

    std::unique_ptr<BankAccount> &account = accounts[choice - 1];

    do
    {
        display_menu();
        cout<<"Enter menu option: ";
        cin>>option;
        handle_menu_option(option, account);
    } while (option != 4);

}

void handle_menu_option(int option, std::unique_ptr<BankAccount> &account)
{
    auto amount = 0;

    switch(option)
    {
    case 1:
        cout<<"Enter deposit amount: ";
        cin>>amount;
        account->deposit(amount);
        break;
    case 2:
        cout<<"Enter withdraw amount: ";
        cin>>amount;
        account->withdraw(amount);
        break;
    case 3:
        cout<<"Balance: ";
        cout<<account->get_balance()<<"\n";
        break;
    case 4:
        cout<<"Exiting...\n";
        break;
    default:
        cout<<"Invalid Option.";
        break;
    }
}