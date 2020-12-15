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
  int result = euclid(1112,695);

  cout << result << endl;
}

