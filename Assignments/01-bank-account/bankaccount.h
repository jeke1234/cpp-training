#include<iostream>
#include<string>
using namespace std;
#pragma once
class BankAccount {
    private:
        string Name;
        string Password;
        int AccountNumber;
        double Balance;
        double InterestRate;
    public:
        BankAccount(string Name, string Password)
        {
            CreateAccount(Name,Password);
        }
        void DepositAmount(double amount);
        void WithdrawAmount(double amount,string Password);
        void CreditInterest(void);
        void ShowAccDetails(void);
        void SetAccName(string Name);
        void SetPassword(string OldPassword,string NewPassword);
        void SetInterestRate(double InterestRate);
    private:
        void CreateAccount(string Name, string Password);
};