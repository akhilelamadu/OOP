#include <iostream>
using namespace std;
//Construcotrs
class Account
{
public:
int Account_Number;
int Balance;
Account()
{
  cout<<"This is a constructor"<<endl;
}

};
/*
1. No return type
2. Same name as Class
3.Always public(Optional)
  */
int main() {

  Account A1;

  
  //cout<<"Account Number is "<<A1.Account_Number<<endl;
  //cout<<"Account Balance is "<<A1.Balance<<endl;

}