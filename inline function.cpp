//write a program to find out maximum and minimum of some value using inline function.

#include <iostream>
using namespace std;
inline int maxval(int arr[],int n) {
	int max = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	return max;

}
	inline int minval(int arr[],int n) {
		int min = arr[0];
		for (int i = 0; i < n; i++) {
			if (arr[i] < min)
				min = arr[i];
		}
		return min;
	}
	int main(){
		
		int arr[5];
		cout << "enter values";
		for (int i = 0; i < 5 ;i++)
			cin >> arr[i];
		cout << "maximum value" << maxval(arr, 5);
		cout << "minimum value" << minval(arr, 5);
	return 0;
	}
