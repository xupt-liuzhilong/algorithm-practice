#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int ans = 0;
	
	// 取出n的每一位重新乘到ans上获得反转后的数字 
	while (n != 0) {
		int digit = n % 10;
		ans = ans* 10 + digit;
		n /= 10;
	}
	
	cout << ans << endl;
	
	return 0;
} 
