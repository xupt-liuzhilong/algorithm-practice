#include <iostream>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	
	int count = 0;
	int j = 0; 	// 用于存放i的临时值 
	int y = 0;	// 用于存放i的每一位 
	for (int i = 1; i <= n; i++) { 
		j = i;	// 把i拷贝到j，防止i修改导致循环出错 
		
		while (j > 0) {	// 取出i的每一位 
			y = j % 10;
			
			if (y == x) {
				count++;
			}
			
			j = j / 10;
		}
	} 
	
	cout << count << endl;
	
	return 0;
}
