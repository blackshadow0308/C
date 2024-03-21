//for ex 4,5
int recursive(int n){
    if (n>1) 
        return(n*recursive(n-1));
}

int power(int n , int x){
    if (x>1) 
        return(n*power(n,x-1));
    return(n);
}