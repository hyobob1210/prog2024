#include <iostream>
using namespace std;

class MyDate {
private:
    int year, month, day;
public:
    MyDate(int y, int m, int d) {
        year = y;
        month = m;
        day = d;
    }
    void Show() {
        cout << year << "년 " << month << "월 " << day << "일" << endl;
    }

};

int main()
{
    MyDate christmas(2021, 12, 25);
    MyDate parentsDay(2022, 5, 8);

    cout << "크리스마스 : ";
    christmas.Show();
    cout << "어버이날 : ";
    parentsDay.Show();
}
