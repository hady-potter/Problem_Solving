#include<iostream>

using namespace std;

int main(){

  int arr[] = { 1,1,2,3,3,4,5,5,4 };

  int x = 0;

  for(int i = 0; i < 9; i++){
    x ^= arr[i];
  }

  cout << x << endl;


  return 0;
}