//atm.h
#include<iostream>
#include<memory>
#include<stdlib.h>
#include<vector>
#include "bank_account.h"
#include "customer.h"

void display_menu();
void run_menu(std::vector<Customer>& customers);
void handle_menu_option(int option, std::unique_ptr<BankAccount> &account);
int scan_card(int max_value);