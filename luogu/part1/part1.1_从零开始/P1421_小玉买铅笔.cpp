#include <iostream>
using namespace std;

int main() {
	int price = 19;	// 一元9角，转换成19元 
	int a, b;
	cin >> a >> b;
	
	int c = a * 10 + b;	// a元b角，转换成a*10+b元 
	
	// 利用整数除法计算 
	cout << c / price << endl; 
	
	return 0;
} 
