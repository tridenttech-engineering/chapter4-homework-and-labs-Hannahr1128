//Lab4-3.cpp - displays a salesperson's commission
//Created/revised by <Hannah Rhode> on <02/06/2025>

#include <iostream>
using namespace std;

int main()
{
  //declare variables
  double COMM_RATE = 0.0;
  double sales = 0.0;
  double commission = 0.0;

  //enter input item
  cout << "Sales amount: ";
  cin >> sales;
  cout << "Enter Commission Rate in decimal form: ";
  cin >> COMM_RATE;

  //calculate and display the commision
  commission = sales*COMM_RATE;
  cout << "Commission: $" << commission << endl;
  
 return 0;
} //end of main function
