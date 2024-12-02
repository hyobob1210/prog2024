#include <stdio.h>

int main()
{
    enum Day { 일요일, 월요일, 화요일, 수요일, 목요일, 금요일, 토요일 };
    int day;

    printf("요일을 선택하세요 : ");
    scanf_s("%d", &day);

    switch (day)
    {
    case 일요일:
        printf("일요일");
        break;
    case 월요일:
        printf("월요일");
        break;
    case 화요일:
        printf("화요일");
        break;
    case 수요일:
        printf("수요일");
        break;
    case 목요일:
        printf("목요일");
        break;
    case 금요일:
        printf("금요일");
        break;
    case 토요일:
        printf("토요일");
        break;

    default:
        printf("0에서 6까지만 입력해주세요");
        break;
    }
}
