#include <stdio.h>
int main()
{
    char ch = 'A';
    char str[20] = "Hello World!";
    float fit = 10.234;
    int no = 150;
    double dbl = 20.123456;


    printf("Character is %c\n", ch);
    printf("String is %s\n", str);
    printf("Float value is %f\n", fit);
    printf("Integer value is %d\n", no);
    printf("Double value is %lf\n", dbl);
    printf("Octal value is %o\n", no);
    printf("Hexadecimal value is %x\n", no);
}