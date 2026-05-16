#include <iostream>
#include <string>
using namespace std;

int main() {
    string w;
    string s;

    getline(cin, w);
    getline(cin, s);

    // 把目标单词转换成小写
    for (int i = 0; i < w.size(); i++) {
        if (w[i] >= 'A' && w[i] <= 'Z') {
            w[i] = w[i] - 'A' + 'a';
        }
    }

    // 把文章转换成小写
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] - 'A' + 'a';
        }
    }

    int count = 0;
    int first = -1;

    int j = 0;

    // 从左到右扫描文章
    while (j < s.size()) {
        // 跳过空格
        if (s[j] == ' ') {
            j++;
            continue;
        }

        // 当前单词的起始位置
        int start = j;

        // 取出当前单词
        string temp = "";

        while (j < s.size() && s[j] != ' ') {
            temp += s[j];
            j++;
        }

        // 判断当前单词是否等于目标单词
        if (temp == w) {
            count++;

            // 第一次出现时记录位置
            if (first == -1) {
                first = start;
            }
        }
    }

    if (count == 0) {
        cout << -1 << endl;
    } else {
        cout << count << " " << first << endl;
    }

    return 0;
}
