#include<iostream>
#define FastIO() ios::sync_with_stdio(false), cin.tie(0)

using namespace std;

int main(){

  FastIO();
  int x = 10;

  // first way to print int as binary
  while(x){
    cout << (x & 1);
    x >>= 1;
  }
  cout << endl << "===============" << endl;


  // second way to print int as binary

  int y = 100;
  for(int msk = 1; msk <= y; msk <<= 1){
    if(y & msk) cout << 1;
    else cout << 0;
  }
    cout << endl << "===============" << endl;

  // L00K : both ways print a number in reverse.

  int z = 100;
  for(int msk = 31; msk >= 0; msk--){
    if(z & (1 << msk)) cout << 1;
    else cout << 0;
  }

  return 0;
}
