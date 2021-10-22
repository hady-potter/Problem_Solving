#include<bits/stdc++.h>

using namespace std;

int main(){
  int n; cin >> n;
  string s; cin >> s;
  int arr[10];
  for(int i = 1; i < 10; i++)
    cin >> arr[i];

  bool flag = true;
  for (int i = 0; i < n; i++){
    if(s[i] - '0' < arr[(s[i] - '0')]){
      s[i] = (arr[(s[i] - '0')]) + '0';
      flag = false;
    }
    else if(s[i] - '0' == arr[(s[i] - '0')]){
      s[i] = (arr[(s[i] - '0')]) + '0';
    }
    else if(!flag) break;
  }
  cout << s << endl;
  


  return 0;
}