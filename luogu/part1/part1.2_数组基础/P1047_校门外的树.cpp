#include <iostream>
using namespace std;

int main() {
	// 初始化数组为0，表示道路上本来全是树 
	int tree[100001] = {0};
	
	int l, m;
	cin >> l >> m;
	
	int start[101];	// 区域起始点 
	int end[101];	// 区域终点 
	for (int i = 0; i < m; i++) {
		cin >> start[i] >> end[i];
	}
	
	// 移走地铁区域的树 
	for (int i = 0; i < m; i++) {
		for (int j = start[i]; j <= end[i]; j++) {
			tree[j] = 1;	// 置为1表示移走树 
		}
	}
	
	int count = 0;
	// 统计数组中0的个数即还剩多少树 
	for (int i = 0; i <= l; i++) {
		if (tree[i] == 0) {
			count++;
		}
	}
	
	cout << count << endl;
	
	return 0;
} 
