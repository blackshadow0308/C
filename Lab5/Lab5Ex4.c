#include<stdio.h>
#include"sum.h"

int main(){
    int a[1000],n;
    scanf("%d\n",&n);
    for ( int i=0 ; i<n ; i++ ){
        scanf("%d",&a[i]);
    }
    printf("%d\n",sum_array(a,n));
    return(0);
}