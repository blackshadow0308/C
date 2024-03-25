#include<stdio.h>
#include"minmax.h"

int main(){
    int A[1000],n;
    scanf("%d\n",&n);
    for ( int i=0 ; i<n ; i++){
        scanf("%d",&A[i]);
    }
    printf("%d %d",min(A,n),max(A,n));
    return(0);
}