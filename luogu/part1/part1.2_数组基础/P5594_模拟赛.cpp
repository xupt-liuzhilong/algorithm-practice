#include <iostream>
using namespace std;

// 表示第i天需要准备第j套模拟题 
// 放在全局，不占用栈空间 
bool used[1005][1005];

int main() {
    int n, m, k;
    cin >> n >> m >> k;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int day;
			cin >> day;
			
			// 第day天需要准备第 j+1 套题 
			used[day][j] = true;
		}
	} 
	
	// 统计每天需要准备几套不一样的题 
	for (int i = 1; i <= k; i++) {
		int count = 0;
		
		for (int j = 0; j < m; j++) {
			if (used[i][j] == 1) {
				count++;
			}
		}
		
		cout << count << " ";
	}

    return 0;
}
