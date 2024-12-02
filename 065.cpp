#include <iostream>
using namespace std;
void cycle(int& a, int& b, int& c) {
    int tmp = a;
    a = b;
    b = c;
    c = tmp;
}
int main()
{
    int a, b, c;

    cout << "세개 숫자 입력 : ";
    cin >> a >> b >> c;

    cycle(a, b, c);

    cout << a << ", " << b << ", " << c << endl;
}

