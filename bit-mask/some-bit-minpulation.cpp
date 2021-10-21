#include<iostream>

using namespace std;

int main(){

  //=== set a bit ===
  int x = 8; // 0b1000
  // set bit number 2
  x |= (1 << 2); // ==> x = 12


  //=== reset a bit ===
  int y = 6; // 0b110
  // reset bit number 1
  y &= ~(1 << 1); // ==> y = 4


  //===set a range of bits ===
  int xx = 48; // 0b110000
  // set first 2 bits
  xx ^= 3; // ==> xx = 51


  //=== reset a range of bits ===
  int yy = 55; //0b110111
  // reset first 3 bits
  yy &= ~7; // ==> yy = 48


  //=== get the most right ON bit of mask ===
  int z = 12; //0b1100
  z &= ~z; // ==> 4 ==> 0b100 ==> bit number 2


  return 0;
}