
// PROBLEM LINK : https://codeforces.com/problemset/problem/978/A
#include<bits/stdc++.h>

using namespace std;


int freq[1010];

int main(){

  int n = 0; cin >> n;
  int arr[n];
  for(int i = 1; i <= n; i++){
    cin >> arr[i];
    freq[arr[i]] = i; 
  }

  set<pair<int, int>> _set;
  for(int i = 0; i < 1010; i++){
    if(freq[i] != 0)
      _set.emplace(freq[i], i);
  }

  cout << _set.size() << endl;
  for(auto& s : _set) cout << s.second << " ";
  cout << endl;

  return 0;
} 