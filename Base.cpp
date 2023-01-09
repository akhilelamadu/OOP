#include <iostream>
using namespace std;

class Account
{
public://Access Modifiers
int Account_Number;
int Balance;
};

int main() {

  Account A1;
  A1.Account_Number=001;
  A1.Balance=500;
  cout<<"Account Number is "<<A1.Account_Number<<endl;
  cout<<"Account Balance is "<<A1.Balance<<endl;

}

//Author: Akhil T P