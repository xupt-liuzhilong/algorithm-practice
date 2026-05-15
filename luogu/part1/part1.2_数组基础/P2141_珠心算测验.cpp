#include <iostream>
using namespace std;

int main() {
	int n;
	int nums[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	} 
	
	int count = 0;
	// 枚举每一个数字，判断是否能有其他两个数字相加得到 
	// 需要注意每一个数字找到一种方法即可 
	for (int i = 0; i < n; i++) {
		bool found = false;	// 标记 nums[i] 是否已经找到一种方法 
		
		for (int j = 0; j < n; j++) {
			// 加数不能和当前被判断的数字相同 
			if (i == j) continue;
			
			// 从 j + 1 开始，避免重复枚举同一个数 
			for(int k = j + 1; k < n; k++) {
				// 第二个加数不能和当前被判断数字相同
				if (k == i) continue;
				
				if(nums[i] == (nums[j] + nums[k])) {
					found = true;	// 标记已经找到 
					break; 	// 当这个数已经满足条件，就不用继续找了 
				}
			}
			
			if (found) break;
		}
		
		// 一个数字即使有多种表示方法，也只能算一次 
		if (found) {
			count++;
		}
	}
	
	cout << count << endl;
	
	return 0;
} 
