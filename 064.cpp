// 시험에 잘 나옴 무조건 암기
#include <iostream>
using namespace std;
int main()
{
    int a[10];
   

    cout << "열개의 숫자 입력 : ";
    for (int i = 0; i < 10; i++)
        cin >> a[i];

    

    int min = INT_MAX, max = INT_MIN, sum = 0;

    for (int x : a) {
        if (x < min) 
            min = x;
        
        if (x > max) 
            max = x;
        sum += x;
    }
    cout << "최솟값 : " << min << endl;
    cout << "최댓값 : " << max << endl;
    cout << "평균 : " << sum/10.0 << endl;

}
