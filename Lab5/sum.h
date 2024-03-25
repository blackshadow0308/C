void sum(int n){
    int sum_odd=0,sum_even=0;
    for (int i=0 ; i<=n ; i++){
        if (i % 2 !=0 )
            sum_odd=sum_odd+i;
        else 
            sum_even=sum_even+i;
    }
    printf("%d %d", sum_odd , sum_even);
}

int sum_array(int a[] , int n){
    int sum=0;
    for ( int i=0 ; i<n ; i++ ){
        sum=sum+a[i];
    }
    return(sum);
}
