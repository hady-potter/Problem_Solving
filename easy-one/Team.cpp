
// PROBLEM lINK : https://codeforces.com/problemset/problem/231/A

#include<iostream>

using namespace std;

int main(){

  int n = 0; cin >> n;
  int x, y , z;
  int counter = 0;
  while(n--){
    cin >> x >> y >> z;
    if(x + y + z > 1) counter++;
  }

  cout << counter << endl;


  return 0;
}