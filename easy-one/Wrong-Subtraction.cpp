// PROBLEM LINK : https://codeforces.com/problemset/problem/977/A

#include<iostream>
using namespace std;

typedef long long ll;

int main(){
  ll n = 0, k = 0;
  cin >> n >> k;
  while (k--){
    if(n % 10) n--;
    else n /= 10;
  }

  cout << n << endl;

  return 0;
}

