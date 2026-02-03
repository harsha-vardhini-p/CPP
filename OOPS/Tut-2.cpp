//Program to demonstrate a simple BankAccount class with deposit and withdraw functionalities
//Private Access Specifier


#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
  private:
    int accountNumber;
    string accountHolderName;
    double balance;
  public:
    void inputAccountDetails()
    {
        cout<<"Enter Account Number: ";
        cin>>accountNumber;
        cout<<"Enter Account Holder Name: ";
        cin.ignore(); // To ignore the newline character left in the buffer
        getline(cin, accountHolderName);
        cout<<"Enter Initial Balance: ";
        cin>>balance;
    }

    void displayAccountDetails()
    { 
        cout<<"\nAccount Number: "<<accountNumber;
        cout<<"\nAccount Holder Name: "<<accountHolderName;
        cout<<"\nBalance: "<<balance<<endl;
    }

    void deposit(double amount)
    {
        if(amount > 0)
        {
            balance += amount;
            cout<<"Deposited: "<<amount<<endl;
        }
        else
        {
            cout<<"Invalid deposit amount!"<<endl;
        }
    }

    void withdraw(double amount)
    {
        
        if(amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout<<"Withdrawn: "<<amount<<endl;
        }
        else
        {
            cout<<"Invalid withdrawal amount!"<<endl;
        }
    }

};

int main()
{
  //Detailing the object of class BankAccount
  
  
  BankAccount account;
  account.inputAccountDetails();
  account.displayAccountDetails();
  int choice;
  cout<<"Enter your choice:\n";
  cout<<"1 for Deposit\n";
  cout<<"2 for Withdraw\n";
  cin>>choice;

  if(choice==1)
  {
    cout<<"Enter amount to deposit\n";
    double amount;
    cin>>amount;
    account.deposit(amount);
  }
  else if(choice==2)
  {
    cout<<"Enter amount to withdraw\n";
    double amount;
    cin>>amount;
    account.withdraw(amount);
  }
  else
  {
    cout<<"Invalid choice\n";
  }
  account.displayAccountDetails();
  return 0;



} 
//Output
// Enter Account Number: 12345
// Enter Account Holder Name: John Doe
// Enter Initial Balance: 1000
// Enter your choice:
// 1 for Deposit
// 2 for Withdraw
// 1 
// 500
// Deposited: 500 
// Account Number: 12345
// Account Holder Name: John Doe
// Balance: 1500  


