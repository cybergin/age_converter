#include<stdio.h>
int main()
{
    int age,days,hrs,min;
    printf("Enter Your age: ");
    scanf("%d",&age);
    days=age*365;
    hrs=days*24;
    min=hrs*60;
    printf("You have lived %d Years or %d Days or %d Hours or %d Minutes",age,days,hrs,min);
}
