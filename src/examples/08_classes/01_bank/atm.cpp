//atm.cpp
#include "atm.h"

using std::cin; using std::cout;

void display_menu()
{
    cout<<"\n\nACC COSC Bank\n\n";
    cout<<"1-Deposit\n";
    cout<<"2-Withdraw\n";
    cout<<"3-Display Balance\n";
    cout<<"4-Exit\n";
}

void run_menu(std::vector<Customer>& customers)
{
    auto option = 0;
    auto choice = 0;
    cout<<"Enter value to scan card: ";
    cin>>choice;

    auto customer_index = scan_card(customers.size());

    auto& customer = customers[customer_index];

    cout<<"Checking(1) or savings(2)?";
    cin>>choice;

    std::unique_ptr<BankAccount> &account = customer.get_account(choice-1);

    do
    {
        display_menu();
        cout<<"Enter menu option: ";
        cin>>option;
        handle_menu_option(option, account);
    }
    while(option != 4);
}

void handle_menu_option(int option, std::unique_ptr<BankAccount> &account)
{
    auto amount = 0;

    switch (option)
    {
    case 1:
        cout<<"Enter deposit amount: ";
        break;
    case 3:
        cout<<"Balance: ";
        cout<<account->get_balance();
        break;
    case 4:
        cout<<"Exiting...\n";
        break;
    default:
        cout<<"Invalid Option...";
        break;
    }
}

int scan_card(int max_value)
{
    return  rand() % 5;
}