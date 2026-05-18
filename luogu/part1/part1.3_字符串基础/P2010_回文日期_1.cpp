#include <iostream>
#include <string>
using namespace std;

// 判断字符串形式的日期是否是回文
bool IsPalindrome(string date) {
    int left = 0;
    int right = date.size() - 1;

    while (left < right) {
        if (date[left] != date[right]) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

class Date {
public:
    Date(int year, int month, int day) {
        _year = year;
        _month = month;
        _day = day;
    }

    // 获取某年某月的天数
    int GetMonthDay(int year, int month) {
        int monthDays[13] = {
            0, 31, 28, 31, 30, 31, 30,
            31, 31, 30, 31, 30, 31
        };

        if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)) {
            return 29;
        }

        return monthDays[month];
    }

    // 日期加 day 天
    Date& operator+=(int day) {
        _day += day;

        while (_day > GetMonthDay(_year, _month)) {
            _day -= GetMonthDay(_year, _month);
            _month++;

            if (_month > 12) {
                _year++;
                _month = 1;
            }
        }

        return *this;
    }

    // 转换成 YYYYMMDD 格式的字符串
    string ToString() {
        string s = "";

        s += char(_year / 1000 + '0');
        s += char(_year / 100 % 10 + '0');
        s += char(_year / 10 % 10 + '0');
        s += char(_year % 10 + '0');

        s += char(_month / 10 + '0');
        s += char(_month % 10 + '0');

        s += char(_day / 10 + '0');
        s += char(_day % 10 + '0');

        return s;
    }

private:
    int _year;
    int _month;
    int _day;
};

int main() {
    string date1;
    string date2;

    cin >> date1 >> date2;

    int year = (date1[0] - '0') * 1000
             + (date1[1] - '0') * 100
             + (date1[2] - '0') * 10
             + (date1[3] - '0');

    int month = (date1[4] - '0') * 10
              + (date1[5] - '0');

    int day = (date1[6] - '0') * 10
            + (date1[7] - '0');

    Date d(year, month, day);

    int count = 0;

    // 日期格式是 YYYYMMDD，所以可以直接用字符串比较大小
    while (date1 <= date2) {
        if (IsPalindrome(date1)) {
            count++;
        }

        d += 1;
        date1 = d.ToString();
    }

    cout << count << endl;

    return 0;
}
