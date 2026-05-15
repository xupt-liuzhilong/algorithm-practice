#include <iostream>
using namespace std;

int main() {
	int nums[100];
	
	int i = 0;
	while (true) {
		cin >> nums[i];
		if (nums[i] == 0) {
			break;
		}
		i++;
	}
	
	// 反向遍历输出 
	for (int j = i - 1; j >= 0; j--) {
		cout << nums[j] << " ";
	}
	
	return 0;
} 
