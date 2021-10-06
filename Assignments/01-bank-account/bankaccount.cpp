#include"bankaccount.h"

static int AccNoGenerator = 1000000; // this is used to create new account number
void BankAccount::DepositAmount(double amount)
{
    // make sure amount is not negative before updating the balance in the account
    if(amount < 0)
        cout<<"Deposit amount can't be less than zero, Please give a valid amount for deposit"<<endl;
    else
    {
        Balance += amount; // update the balance
        cout<<"Net Balance after deposit is "<<Balance<<endl;
    }
}

void BankAccount::WithdrawAmount(double amount, string Password)
{
    // check for negative amount, sufficient balance and valid password before withdrawing any amount
    if(amount < 0)
        cout<<"Withdraw amount can't be less than zero, Please give a valid amount for withdraw"<<endl;
    else if(amount > Balance)
        cout<<"amount given for withdraw is more then available balance"<<endl;
    else if(Password != this->Password)
        cout<<"Invalid Password, Please enter a valid password for withdraw"<<endl;
    else
    {
        Balance -= amount; // update the balance
        cout<<"Remaining Balance after withdraw is "<<Balance<<endl;
    }
}

void BankAccount::CreditInterest()
{
    //credit one month interest and update the balance in the account
    double Interest;
    Interest = (Balance * InterestRate) / 1200;
    Balance += Interest;
    cout<<"amount of interest credited is "<<Interest<<endl;
    cout<<"Updated amount after creaditing interest is "<<Balance<<endl;
}

void BankAccount::ShowAccDetails()
{
    cout<<"Please find the Account Details as below"<<endl;
    cout<<"  Account Holder Name: "<<Name<<endl;
    cout<<"  Account Number: "<<AccountNumber<<endl;
    cout<<"  InterestRate(in %): "<<InterestRate<<endl;
    cout<<"  Account Balance: "<<Balance<<endl;
}

void BankAccount::CreateAccount(string Name, string Password)
{
    if(Name.empty() || Password.empty())
        cout<<"either Name or password is empty string. please enter valid string"<<endl;
    else if((Name.find_last_of(' ') == string::npos))
        cout<<"Last Name is missing. please provide the Last Name"<<endl;
    else
    {
        this->Name = Name;
        this->Password = Password;
        AccountNumber = AccNoGenerator++;
        Balance = 0.0;
        InterestRate = 5;
        cout<<"account created successfully with Account number: "<<AccountNumber<<endl;
        ShowAccDetails();
    }
}

void BankAccount::SetAccName(string Name)
{
    size_t found_mod;
    size_t found_org;
    
    if(Name.empty())
        cout<<"Name can't be empty, please provide a valid Name"<<endl;
    else
    {
        found_mod = Name.find_last_of(' ');
        if(found_mod == string::npos)
        {
            found_org = this->Name.find_last_of(' ');
            this->Name.replace(0,found_org, Name);
        }
        else
        {
            found_org = this->Name.find_last_of(' ');
            this->Name.replace(0, found_org, Name, 0, found_mod);
        }
        cout<<"Updated Name of the Account Holder: "<<this->Name<<endl;
    }
}

void BankAccount::SetInterestRate(double InterestRate)
{
    double rate;
    rate = (this->InterestRate * 0.1);
    if((InterestRate > (this->InterestRate + rate)) || (InterestRate < (this->InterestRate - rate)))
        cout<<"Interest Rate can't very by more than 10%"<<endl;
    else
    {
        this->InterestRate = InterestRate;
        cout<<"Updated Interest Rate: "<<this->InterestRate<<endl;
    }
}

void BankAccount::SetPassword(string OldPassword, string NewPassword)
{
    if(OldPassword != Password)
        cout<<"Old Password doesn't match, Please provide valid old password for setting a new password"<<endl;
    else if(NewPassword.empty())
        cout<<"New Password can't be empty, Please provide a valid password to set"<<endl;
    else
    {
        Password = NewPassword;
        cout<<"Password Updated Successfully"<<endl;
    }
}