//atm.h
#include<iostream>
#include<vector>
#include "bank_account.h"

void display_menu();
void run_menu(std::vector<BankAccount*> accounts);
void handle_menu_option(int option, BankAccount *account);