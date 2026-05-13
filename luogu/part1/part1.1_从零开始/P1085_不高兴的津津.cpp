#include <iostream>
using namespace std;

int main() {
	int n = 8;
	int school[7];		// 记录学校学习时间 
	int mum[7];			// 记录妈妈报课学习时间 
	int more[7] = {0};	// 记录超时时间，预设都是0 
	for (int i = 0; i < 7; i++) {
		cin >> school[i] >> mum[i];
		if (school[i] + mum[i] > n) {	// 只有超时才会记录 
			more[i] = school[i] + mum[i] - n;
		}
	}
	
	int max = 0;	// 最不高兴的天数-1 
	for (int i = 0; i < 7; i++) {
		if (more[max] < more[i]) {
			max = i;
		}
	}
	
	if (more[max] == 0) {	// 判断是否有超时天数
		cout << 0 << endl;
	}
	else {
		cout << max + 1 << endl;
	}
	
	return 0;
} 
