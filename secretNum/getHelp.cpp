#include <iostream>

using std::string;
using std::to_string;

string getParity(int num) {
  int par = num % 2;

  return "The number's parity is " + to_string(par);
}

string getFirstDivider(int num) {
  int res;
  for (int i = num - 1; i > 0; i--) {
    if (num % i == 0) {
      res = i;
      break;
    }
  }

  return "A divider for the num is " + to_string(res);
}

string getMultiplier(int num) {
  int mult = rand() % 11;

  return "A multiplier for the num is " + to_string(mult * num);
}

string getDigits(int num) {
  string numString = std::to_string(num);

  return "The number's digits is " + to_string(numString.length());
}

string getSumDigits(int num) {
  int hundreds, dozens, units;

  units = num % 10;
  dozens = num % 100 - units;
  hundreds = (num - units - dozens) / 100;
  dozens /= 10;

  return "The addition of the number's digits is " +
         to_string(units + dozens + hundreds);
}