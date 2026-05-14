#include <iostream>
using namespace std;

int main() {
	int arr[10];// 苹果高度 
	int n;		// 陶陶身高 
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	cin >> n; 
	
	int m = 30;	// 板凳高度 
	int count = 0;
	for (auto e : arr) {
		if (m + n >= e) {
			count++;
		}
	}
	
	cout << count << endl;
	
	return 0;
} 
