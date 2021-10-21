
// PROBLEM LINK : https://codeforces.com/problemset/problem/999/A

#include<bits/stdc++.h>
using namespace std;


int main(){

  int n, k; cin >> n >> k;
  int arr[n];
  list<int> _list;
  int x = 0;
  for(int i = 0; i < n; i++){
    cin >> x;
    _list.push_back(x);
  }

  while(_list.size()){
    if(k >= _list.front()) _list.pop_front();
    else if(k >= _list.back()) _list.pop_back();
    else break;
  }

  cout << n - _list.size() << endl;
  
  return 0;
}