#include <stdio.h>

int main()
{
    int a[10];
    int sum1, sum2,sum3,sum4;
    
    printf("열개의 숫자 입력 : ");
    for (int i = 0; i < 10; i++)
        scanf_s("%d", &a[i]);

    sum1 = sum2 = sum3 = sum4 = 0;

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            if (a[i] % 2 == 0) {
                sum3 += a[i];
            }
            sum1 += a[i];
            
        
        }
        else if (i % 2 == 1) {
            if (a[i] % 2 == 1) {
                sum4 += a[i];
            }
            sum2 += a[i]; 
            
        }
        

    }
    printf("짝수번째 인덱스에 있는 숫자의 합 : %d\n", sum1);
    printf("짝수번째 인덱스에 있는 숫자의 합 : %d\n", sum2);
    printf("저장된 값이 짝수인 숫자의 합 : %d\n", sum3);
    printf("저장된 값이 홀수인 숫자의 합 : %d\n", sum4);




}
