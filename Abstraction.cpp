#include <iostream>
using namespace std;
class Checker {
  virtual void lcheck() = 0;
};
class Account : Checker {
private:
  int Account_Number;
  int Balance;

public:
  Account(int account_number, int balance) {
    Account_Number = account_number;
    Balance = balance;
  }

  void lcheck() {
    if (Balance > 1000)
      cout << "Eligible for Loan" << endl;
    else
      cout << "Not Eligible for Loan" << endl;
  }
};

int main() {

  Account A1(001, 5000);
  A1.lcheck();

  return 0;
}

/* We created a new class and a function lcheck()

A new programmer or user using this function dont need to know te complexity of
the function in Account class Author: Akhil T P
*/