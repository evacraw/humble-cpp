#include <iostream>

using namespace std;

void nabeatsu(int num) {
  if (num > 1) {
    nabeatsu(num - 1);
  }
  bool isAho = num % 3 == 0 || num % 10 == 3;
  bool isKobi = num % 8 == 0;

  if(isAho && isKobi) {
    cout << num << "ぁぁん!? おーい" << endl;
  } else if(isAho) {
    cout << num << "ぁぁん!" << endl;
  } else if(isKobi) {
    cout << num << "? おーい" << endl;
  } else {
    cout << num << endl;
  }
}

int main() {
  nabeatsu(100);
  return 0;
}
