#include <iostream>

using namespace std;

int euclid(int fnum, int snum){
  int modForNext = fnum % snum;
  
  if(modForNext == 0){
    return snum;
  }
  euclid(snum, modForNext);
}

int main(){
  int fnum;
  int snum;

  cin >> fnum;
  cin >> snum;

  int result = euclid(fnum,snum);

  cout << result << endl;
}

