#include<stdio.h>

void bubble_sort(int a[] , int n){
    for (int j=0 ; j<n ; j++){
        for (int i=0 ; i<n-1 ; i++){
            if (a[i]>a[i+1]){
                a[i]=a[i]+a[i+1];
                a[i+1]=a[i]-a[i+1];
                a[i]=a[i]-a[i+1];
            }
        }
    }
}

void insection_sort(int a[], int n){
    for (int j=0 ; j<n ; j++ ){
        for (int i=j ; i>0 ; i-- ){
            if (a[i]<a[i-1]) {
                a[i]=a[i]+a[i-1];
                a[i-1]=a[i]-a[i-1];
                a[i]=a[i]-a[i-1];
            }
        }
    }
}

void selection_sort(int a[], int n){
    int key;
    for (int i=0 ; i<n-1 ; i++){
        key=i;
        for (int j=i+1 ; j<n ; j++){
            if (a[j]<a[key])
                key=j;
        }
        if (key!=i){
            a[i]=a[i]+a[key];
            a[key]=a[i]-a[key];
            a[i]=a[i]-a[key];
        }
    }
}

