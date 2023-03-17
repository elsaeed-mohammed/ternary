#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("enter the year : ");
    scanf("%d",&year);
    (year%4==0 && year%100!=0)?printf("%d is leap year ",year):(year%400==0)?printf("%d is leap year",year):printf("%d is common year",year);
    return 0;
}
