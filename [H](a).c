#include<stdio.h>
int main()
{
    int a;
    printf("Enter a five digit number :");
    scanf("%d",&a);
    int one=a/10000;
    int remainingfour=a%10000;
    int two=remainingfour/1000;
    int remainingthree=remainingfour%1000;
    int three=remainingthree/100;
    int remainingtwo=remainingthree%100;
    int four=remainingtwo/10;
    int remainingone=remainingtwo%10;
    int sum=one+two+three+four+remainingone;

    printf("Sum of the digits is : %d",sum);

    return 0;

}
