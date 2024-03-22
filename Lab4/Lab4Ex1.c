#include <stdio.h>
#include "gcd.h"

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",gcd(a,b));
    return(0);
}