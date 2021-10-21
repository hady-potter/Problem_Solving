#include<iostream>
#include<algorithm>

#define FastIO() cin.tie(0),cin.sync_with_stdio(0)
using namespace std;

int main(){
  FastIO();
  int x = 0; cin >> x; 
  cout << __builtin_popcount(x);


  return 0;
}