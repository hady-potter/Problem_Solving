
// PROBLEM lINK : https://codeforces.com/problemset/problem/158/A

#include<iostream>

using namespace std;

int main(){

  int n = 0, k = 0;
  cin >> n >> k;
  int arr[n];

  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  int counter = 0;
  for(int i = 0; i < n; i++){
    if(arr[i] >= arr[k - 1] && arr[i] > 0)
      counter++;
  }

  cout << counter << endl;

  return 0;
}