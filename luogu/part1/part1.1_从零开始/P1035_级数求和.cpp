#include <iostream>
using namespace std;

int main() {
	int k;
	cin >> k;
	
	double s = 1;		// 存放计算的结果 
	long long n = 1;	// 防止k值太大导致n值太大溢出 
	while (s <= k) {
		n++;
		s += 1.0 / n;	// 注意小数除法除号两边至少有一个为浮点数
	}
	
	cout << n << endl;
	
	return 0;
} 
