int min(int A[],int n){
    int min=A[0];
    for ( int i=0 ; i<n ; i++){
        if (A[i]<min) 
            min=A[i];
    }
    return(min);
}

int max(int A[],int n){
    int max=A[0];
    for ( int i=0 ; i<n ; i++){
        if (A[i]>max) 
            max=A[i];
    }
    return(max);
}