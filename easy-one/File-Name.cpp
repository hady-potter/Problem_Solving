
// PROBLEM LINK : https://codeforces.com/problemset/problem/978/B

#include<bits/stdc++.h>

using namespace std;

int main(){

  int x = 0; cin >> x;
  string s; cin >> s;
  int counter = 0;
  for(int i = 0; i < s.size() - 1; i++){
    if(s[i] == 'x' && s[i + 1] == 'x' && s[i + 2] == 'x')
      counter++;
  }
  cout << counter << endl;


  return 0;
}