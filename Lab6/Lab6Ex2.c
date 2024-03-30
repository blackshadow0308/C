#include<stdio.h>

int main()
{   
    int a,b;
    scanf("%d %d", &a ,&b);
    int *x=&a,*y=&b;
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    printf("%d %d\n",*x,*y);
    return(0);
}