
// PROBLEM lINK:  https://codeforces.com/problemset/problem/71/A

#include<iostream>

using namespace std;

int main(){

  int n = 0; cin >> n;

  while(n--){

    string word; cin >> word;
    if(word.size() > 10){
      cout << word[0] << word.size() - 2 << word[word.size() - 1] << endl;
    }
    else cout << word << endl;
  }

  return 0;
}