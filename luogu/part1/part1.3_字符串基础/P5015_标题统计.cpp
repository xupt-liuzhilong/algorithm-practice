#include <iostream>
#include <string> 
using namespace std;

int main() {
	string s;
	
	// 需要输入带空格的一整行字符串，用 getline(cin, s); 
	getline(cin, s);
	
	int count = 0;
	
	for (int i = 0; i < s.size(); i++) {
		// 空格不计数 
		if (s[i] != ' ') {
			count++;
		}
	}
	
	cout << count << endl;
	
	return 0;
} 
