#include <iostream>
using namespace std;

class Account //Parent class
{
private:
int Account_Number;
protected:
int Balance;

public:
Account(int account_number, int balance)
{
  Account_Number=account_number;
  Balance=balance;
}
protected:
int Get_value()
{
    return Balance;
}
};

class Student_Account:Account //child class
{
private:
    int Age;
public:
Student_Account(int account_number, int balance, int age ):Account(account_number,balance)
{
    Age =age;
}
public:

void Get_data()
{
    cout<<"Age: "<<Age<<" Balance is : "<<Balance<<endl;
}
/* 
In the child class
"Age" is an element only for child it can be accessed directly
Balance is protected member and is accessible is child direclt(meanwhieprotected members are accessed only through public funcs)
*/
};

int main() {

  Account A1(001,5000);
  Student_Account Kashvi(002,3000,3);
  Kashvi.Get_data();
 // cout<<"The bal of child is" <<Kashvi.Get_value()<<endl;
 

return 0;
}

/*
Child class can access all elements of parent class


Author: Akhil T P
*/