#include <iostream>
using namespace std;

int main() {
	int n = 300;	// 妈妈每月给的零花钱 
	int budget[12];	// 每月预算 
	for (int i = 0; i < 12; i++) {
		cin >> budget[i];
	}

	int start = 0;	// 月初有多钱 
	int end = 0;	// 月末剩多钱 
	int more = 0;	// 每月多出来的整百钱 
	int save = 0;	// 妈妈那里存的钱 
	bool flag = false;	// 判断是否超支 
	int x = 0;		// 第一次出现超支的月份 
	for (int i = 0; i < 12; i++) {
		end = start + n - budget[i];
		if (end < 0) {
			flag = true;
			x = i + 1;
			break;
		}
		more = ((end) / 100) * 100;
		save += more;
		start = end - more;
		more = 0;
	}

	if (flag) {	// 输出超支的月份 
		cout << -1 * x << endl;
	}
	else {	// 输出年末手中的钱 
		cout << start + save * 1.2 << endl;
	}

	return 0;
} 
