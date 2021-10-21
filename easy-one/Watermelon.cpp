
// PROBLEM LINK: https://codeforces.com/problemset/problem/4/A

#include<iostream>

using namespace std;

int main(){

  int x = 0; cin >> x;

  (!(x & 1) && x != 2) ? cout << "YES\n" : cout << "NO\n";

  return 0;
}