#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int num) {
  bool isPrime = true;
  double sqrtNum = sqrt(num);
  if(num == 0 || num == 1) {
    isPrime = false;
  }
  for(int i = 2; i <= sqrtNum; i++) {
    bool ismod0 = num % i == 0;
    if(ismod0) {
      isPrime = false;
      break;
    }
  }

  return isPrime;
}

int main() {
  int stdinNum;
  cin >> stdinNum;
  bool result = isPrime(stdinNum);
  if(result) {
    cout << stdinNum << " is prime number" << endl;
  }else {
    cout << stdinNum << " is not prime number" << endl;
  }

  return 0;
}
