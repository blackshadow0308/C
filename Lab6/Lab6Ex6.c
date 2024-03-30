#include<stdio.h>

int sum( int num1, int num2)
{
    int sum=num1+num2;
    return(sum);
}

int main ()
{
    int a=2,b=2,(*result)(int,int);
    result=&sum;
    printf("%d",result(a,b));

    return 0;
}