/*
          problem: Count increasing subarrays
● Read an Integer N, then read N (< 200) integers.
● Output: Count how many subarrays are increasing in the array.
● E.g. If input is 1 2 3 4
  ○ We can find all sublists of length 1 ⇒ [1], [2], [3], [4]
  ○ All sublists of length 2 ⇒ [1, 2], [2, 3], [3, 4]
  ○ All sublists of length 3 ⇒ [1, 2, 3], [2, 3, 4]
  ○ All sublists of length 4 ⇒ [1, 2, 3, 4]

● Inputs ⇒ Outputs
  ○ 4 1 2 3 4 ⇒ 10 [10 sub-arrays from previous example, all are increasing]
  ○ 4 4 3 2 1 ⇒ 4 [only sub-arrays of length 1 can be considered]
  ○ 4 10 20 1 5 ⇒ 6
*/


  // solution

#include <iostream>
#include <vector>
using namespace std;


int count_increasing_subarray(const vector<int> &arr) {
	int counter = 1;
	int ans = 0;
	for(int i = 1; i < arr.size(); i++) {
		if(arr[i] > arr[i - 1]) counter++;
		else {
			ans += (counter * (counter + 1)) / 2;
			counter = 1;
		}
	}

	ans += (counter * (counter + 1)) / 2;
	return ans;

}

int main() {

	vector<int> arr { 1, 2, 3, 4 };

	cout << count_increasing_subarray(arr) << endl;



	return 0;
}