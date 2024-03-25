#include<stdio.h>
#include"matrix.h"

int main (){
    int n,m;
    scanf("%d %d\n",&n,&m);
    float a[100][100];
    for ( int i=0 ; i<n ; i++){
        for ( int j=0 ; j<m ; j++){
            scanf("%f ",&a[i][j]);
        }
    }

    printf("\nSum = %d\n",sum_2D_array(a,n,m));
    transpose(a,n,m);
    printf("Determinant = %d\n",determinant(a,n));
    inverse(a,n);
    return(0);
}