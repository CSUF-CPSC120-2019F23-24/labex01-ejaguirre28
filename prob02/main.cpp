// This program calculates the user's pay.

#include <iostream>

int main()
{
  double bars, rate, pay;

  // Get the number of candy bars sold.
  std::cout << "How many many candy bars did you sell? ";
  std::cin >> bars;

  // Get the hourly pay rate. 
  std::cout << "How much does the organization earn for each bar sold? ";
  std::cin >> rate;

  // Calculate the pay.
  pay = bars * rate;

  // Display the pay.
  std::cout << "Congrats you have earned $" << pay << std::endl;

  return 0;
}
