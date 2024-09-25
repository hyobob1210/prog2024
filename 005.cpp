#include <stdio.h>
int main()
{
    printf("\"OOO의\" 출석점수 계산\n");
    printf("---------------------\n");
    printf("수업시간\t%5d 시간\n", 60);
    printf("결석시간\t%5d 시간\n", 2);
    printf("출석률\t\t%5.1f %% \n", (58.0 / 60.0) * 100.0);
    printf("출석점수\t%5.1f 점\n", 15 * (58.0 / 60.0));
}
