#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int nums[3];	// 记录每包铅笔个数 
	int prices[3];	// 记录每包铅笔价格 
	for (int i = 0; i < 3; i++) {
		cin >> nums[i] >> prices[i];
	} 
	
	int costs[3];	// 记录每种情况的花费 
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		int count = 0;
		
		// 判断铅笔数量是否够用 
		while (sum < n) {
			count++; 
			sum += nums[i];
			costs[i] = count * prices[i];
		}
	}
	
	// 获取最小花费 
	int min_cost = costs[1];
	for (int i = 0; i < 3; i++) {
		if (min_cost > costs[i]) {
			min_cost = costs[i];
		}
	}
	cout << min_cost << endl;
	
	return 0;
} 
