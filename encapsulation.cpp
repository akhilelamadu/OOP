#include <iostream>
using namespace std;

class Account
{
private:
int Account_Number;
int Balance;

public:
Account(int account_number, int balance)
{
  Account_Number=account_number;
  Balance=balance;
}

void Set_value(int balance)
{
    Balance=balance;
}

int Get_value()
{
    return Balance;
}
};

int main() {

  Account A1(001,500);


  cout<<"Account Balance is "<<A1.Get_value()<<endl;
  A1.Set_value(1000);
 
  cout<<"Account Balance is "<<A1.Get_value()<<endl;

}
/*

The Data members are private and are not asccessible directly from main func using dot opoerator(.), We need to use public function
Set_value() & Get_value()

Author: Akhil T P
*/