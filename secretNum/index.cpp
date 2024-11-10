#include "getHelp.cpp"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[]) {
  int secrectNum = 0;

  srand(time(0));
  secrectNum = rand() % 1001;

  int num;
  for (int trys = 5; trys > 0; trys--) {
    cout << "Could u guess the secret number?" << endl << ">";
    cin >> num;

    if (num == secrectNum) {
      cout << "Congratulations!!! U guess the number: " << secrectNum << endl;
      break;
    }

    
      cout << "U was " << (secrectNum > num ? "low." : "high." ) << endl;

    std::string helpRes;
    cout << "U've " << trys - 1 << " trys. Any help? (yes/no)[no]" << endl;
    cin >> helpRes;

    if (!helpRes.empty() && !helpRes.compare("y")) {
      string (*helpers[5])(int) = {getFirstDivider, getMultiplier, getParity,
                                   getDigits, getSumDigits};
      helpRes = helpers[trys - 1](secrectNum);
      cout << helpRes << std::endl << "\n";
    }
  }

  return 0;
}
