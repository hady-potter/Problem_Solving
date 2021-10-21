
// PRPOBLEM LINK : https://codeforces.com/problemset/problem/999/B

#include<bits/stdc++.h>

using namespace std;


int main(){

  int n = 0; string s;
  cin >> n >> s; 

  for(int i = 1; i <= n; i++){
    if(n % i == 0){
      reverse(s.begin(), s.begin() + i);
    }
  }

  cout << s << endl;

  return 0;
}
