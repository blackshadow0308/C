#include<stdio.h>
#include"sort.h"


int main(){
    int a[5]={3,2,1,5,4}, n=5;
    //bubble_sort(a,n);
    insection_sort(a,n);
    //selection_sort(a,n);
    for ( int i=0 ; i<n ; i++){
        printf("%d  ",a[i]);
    }
    return(0);
}