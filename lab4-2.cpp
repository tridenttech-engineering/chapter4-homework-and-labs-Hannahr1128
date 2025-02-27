//Lab4-2.cpp - displays a salesperson's commission
//Created/revised by <Hannah Rhode> on <02/05/2025>

#include <iostream>
using namespace std;

int main()
{
  //declare named constants and variables
  const double COMM_RATE = 0.1;
  double sales = 0.0;
  double commission = 0.0;

  //enter input items
  cout << "Sales amount: ";
  cin >> sales;

  // calculate and display the commission
  commission = sales * COMM_RATE;
  cout << "Commission: $" 
    <<    commission << endl;
  
  return 0;
} //end of main function
/*
Sales amount: 1328.50
Commission: $132.85
Press any key to continue . . .
*/