#include <iostream>
#include <string> 
using namespace std;

int main() {
	string s;
	cin >> s;
	
	int cnt = 0;
	int sum = 0;
	for (int i = 0; i < 11; i++) {
		if (s[i] != '-') {
			cnt++;
			// 由于输入的是字符
			// 要转化成数字先减去 0 的 ASCII值，也就是减去 '0' 
			sum += (s[i] - '0') * cnt;
		}
	} 
	
	int check = sum % 11;	// 计算识别码 
	char ret;
	
	if (check == 10) {
		ret = 'X';
	}
	else {
		ret = check + '0';	// 将数字转化成对应字符 
	}
	
	// 判断识别码是否正确 
	if (ret == s[12]) {
		cout << "Right" << endl;
	}
	else {
		s[12] = ret;	// 修改识别码 
		cout << s << endl;
	}
	
	return 0;
} 
