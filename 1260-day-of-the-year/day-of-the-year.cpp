class Solution {
public:
    bool isLeapYear(int year) {
        return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    }

    int dayOfYear(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));
        int monthDays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        int days = 0;
        for (int i = 0; i < month - 1; ++i) {
            days += monthDays[i];
        }
        days += day;
        if (isLeapYear(year) && month > 2)
            days++;

        return days;
    }
};
