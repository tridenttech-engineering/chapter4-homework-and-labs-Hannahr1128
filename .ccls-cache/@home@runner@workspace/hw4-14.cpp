// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <Hannah Rhode> on <02/06/2025>

#include <iostream>
using namespace std;

int main() {
  // define variables
  int small = 0;
  int medium = 0;
  int large = 0;
  int family = 0;
  int total = 0;
  double smallPercent = 0.0;
  double mediumPercent = 0.0;
  double largePercent = 0.0;
  double familyPercent = 0.0;

  // enter input items
  cout << "Small: ";
  cin >> small;
  cout << "Medium: ";
  cin >> medium;
  cout << "Large: ";
  cin >> large;
  cout << "Family: ";
  cin >> family;

  // calculate the total
  total = small + medium + large + family;

  // calculate the percentages
  smallPercent = static_cast<double>(small) / total * 100;
  mediumPercent = static_cast<double>(medium) / total * 100;
  largePercent = static_cast<double>(large) / total * 100;
  familyPercent = static_cast<double>(family) / total * 100;

  // display the totals and percentages
  cout << "Total: " << total << endl;
  cout << "Small: " << small << " " << smallPercent << "%" << endl;
  cout << "Medium: " << medium << " " << mediumPercent << "%" << endl;
  cout << "Large: " << large << " " << largePercent << "%" << endl;
  cout << "Family: " << family << " " << familyPercent << "%" << endl;
  return 0;

  return 0;
} // end of main function