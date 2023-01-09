#include <iostream>
using namespace std;
//Construcotrs
class Account
{
public:
int Account_Number;
int Balance;

Account(int account_number, int balance)
{
  Account_Number=account_number;
  Balance=balance;
}

};
/*
1. No return type
2. Same name as Class
3.Always public(Optional)
  */
int main() {

  Account A1(001,500);
  Account A2(002,1000);

  
  cout<<"Account Number is "<<A1.Account_Number<<endl;
  cout<<"Account Balance is "<<A1.Balance<<endl;
  
  cout<<"Account Number is "<<A2.Account_Number<<endl;
  cout<<"Account Balance is "<<A2.Balance<<endl;


}