#include <iostream>
using namespace std;

// 判断是否是闰年
bool isLeap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 判断日期是否合法
bool isValidDate(int year, int month, int day) {
    int monthDay[13] = {
        0, 31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    if (month < 1 || month > 12) {
        return false;
    }

    if (isLeap(year)) {
        monthDay[2] = 29;
    }

    if (day < 1 || day > monthDay[month]) {
        return false;
    }

    return true;
}

int main() {
    int date1, date2;
    cin >> date1 >> date2;

    int ans = 0;

    int startYear = date1 / 10000;
    int endYear = date2 / 10000;

    for (int year = startYear; year <= endYear; year++) {
        // 根据年份构造回文日期
        int month = year % 10 * 10 + year / 10 % 10;
        int day = year / 100 % 10 * 10 + year / 1000;

        // 拼成完整日期 YYYYMMDD
        int date = year * 10000 + month * 100 + day;

        if (isValidDate(year, month, day) && date >= date1 && date <= date2) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
