#include "bankaccount.h"

int main(int argc, char const *argv[])
{
    //create a new account
    BankAccount Acc1("jeke Kumar Gochhayat", "jeke123");

    Acc1.DepositAmount(1500);
    Acc1.CreditInterest();
    Acc1.WithdrawAmount(300,"jeke123");
    Acc1.ShowAccDetails();

    // failure cases
   /* Acc1.DepositAmount(-1500);
    Acc1.WithdrawAmount(-300,"password");
    Acc1.WithdrawAmount(3000,"password");
    Acc1.WithdrawAmount(100,"passwordd");
    Acc1.ShowAccDetails();*/


   // BankAccount Acc3("", "shyam");
    //BankAccount Acc4("shyam", "");
   // BankAccount Acc5("shyam", "shyam");
   // create another account
    BankAccount Acc2("shyam sahu", "shyam123");

    Acc2.DepositAmount(2500);
    Acc2.CreditInterest();
    Acc2.SetPassword("","shyam1234");
    Acc2.SetPassword("shyam12","shyam1234");
    Acc2.SetPassword("shyam123","shyam1234");
    Acc2.WithdrawAmount(400,"shyam123");
    Acc2.WithdrawAmount(400,"shyam1234");
    Acc2.ShowAccDetails();

    Acc2.SetAccName("");
    Acc2.SetAccName("ram patro");
    Acc2.SetAccName("gopal");
    Acc2.SetAccName("madhu ");

    Acc2.SetInterestRate(7);
    Acc2.SetInterestRate(5.3);
    Acc2.ShowAccDetails();

    return 0;
}
