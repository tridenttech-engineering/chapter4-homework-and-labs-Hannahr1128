// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {

  //decalre variables
  double beginningBalance = 0.0;
  double totalDeposits = 0.0;
  double totalWithdrawals = 0.0;
  double endBalance = 0.0;

  // enter input items
  cout << "Enter the beginning balance: ";
  cin >> beginningBalance;
  cout << "Enter the total deposits: ";
  cin >> totalDeposits;
  cout << "Enter the total withdrawals: ";
  cin >> totalWithdrawals;
  // calculate the end balance
  endBalance = beginningBalance + totalDeposits - totalWithdrawals;
  // display the end balance
  cout << "The ending balance is: " << endBalance << endl;
  return 0;
} // end of main function