//  Write a C program to count number of digits in a number.
#include<stdio.h>
int main()
{
    int num = 10;
    int dig = 0;
    int num1 = num;
    // 234 / 10 = 23
    // 23 / 10 = 2
    // 2 / 10 = 0
    printf("Change222");
    while(num!=0)
    {
        num = num/10;
        dig++;
    }

    printf("\n\tNumber: %d has %d Digits. ",num1, dig);
    printf("Change");
    printf("Change22");
    return 0;
}
