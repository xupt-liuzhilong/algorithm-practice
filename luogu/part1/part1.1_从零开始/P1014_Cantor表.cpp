#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	
	int i = 1;
	
	// 找到 n 项所在的斜线 
	while (n > i) {
		n -= i;
		i++;
	} 
	
	int x = 0;	// 分子 
	int y = 1;	// 分母 
	
	if (i % 2 != 0) {
		// 奇数斜线：分子从大到小，分母从小到大 
		x = i - n + 1;
		y = n;
	}
	else {
		// 偶数斜线：分子从小到大，分母从大到小 
		x = n;
		y = i - n + 1;
	}
	
	cout << x << "/" << y << endl;
	
	return 0;
} 
