#include <iostream>
using namespace std;

bool check(int a, int b, int c) {
	int cnt[10]  = {0};	// 存放三个数的各位 
	
	int nums[3] = {a, b, c};
	
	// 获取每个数的各位 
	for (int i = 0; i < 3; i++) {
		int x = nums[i];
		
		while (x > 0) {
			int digit = x % 10;
			
			if (digit == 0) return false;	// 不能有0 
			
			cnt[digit]++;
			x /= 10;
		}
	}
	
	// 检查1~9每个都出现一次
	for (int i = 1; i <= 9; i++) {
		if (cnt[i] != 1) return false;
	} 
	
	return true;
}

int main() {
	int a, b, c;
	for (a = 123; a <= 329; a++) {
		b = 2 * a;
		c = 3 * a;
		
		if (check(a, b, c)) {
			cout << a << " " << b << " " << c << endl;
		} 
	}
	
	return 0;
} 
