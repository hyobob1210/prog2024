#include <stdio.h>
int main()
{
    char department[50], name[20];
    int student_number;

    printf("학과 : ");
    scanf_s("%s", &department, 50);

    printf("학번 : ");
    scanf_s("%d", &student_number);

    printf("이름 : ");
    scanf_s("%s", &name, 30);
}