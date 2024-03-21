#include<stdio.h>
#include"gcd.h"

int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("%d\n",gcd(a,gcd(b,gcd(c,d))));
    return(0);
}