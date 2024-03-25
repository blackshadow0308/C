int sum_2D_array(float a[100][100] , int n , int m){
    int sum=0;
    for ( int i=0 ; i<n ; i++ ){
        for ( int j=0 ; j<m ; j++ ){
            sum=sum+a[i][j];
        }
    }
    return(sum);
}

void transpose (float a[100][100] , int n , int m) {
    float c[100][100];
    for ( int i=0 ; i<n ; i++ ){
        for ( int j=0 ; j<n ; j++ ){
            c[i][j]=a[i][j];
        }
    }
    for (int i=0 ; i<n ; i++ ) {
        for (int j=i ; j<m ; j++ ){ 
            if (c[i][j] != c[j][i]){
            c[i][j]=c[i][j]+c[j][i];
            c[j][i]=c[i][j]-c[j][i];
            c[i][j]=c[i][j]-c[j][i];
            }
        }
    }
    printf("\nTranspose :\n");
    for ( int i=0 ; i<m ; i++){
        for ( int j=0 ; j<n ; j++){
            printf("%f ",c[i][j]);
        }
        printf("\n");
    }    
}

int determinant(float a[100][100], int n ) {
    float c[100][100];
    for ( int i=0 ; i<n ; i++ ){
        for ( int j=0 ; j<n ; j++ ){
            c[i][j]=a[i][j];
        }
    }
    for ( int i=0 ; i<n ; i++ ){
        for ( int j=i+1 ; j<n ; j++ ){
            for ( int t=n-1 ; t>=0 ; t--){
                c[j][t]=-((float)a[j][i]/a[i][i])*a[i][t]+(a[j][t]);
            }
        }
    }
    int d=1;
    for ( int i=0 ; i<n ; i++ ){
        d=d*c[i][i];
    }
    return(d);
}

void inverse( float a[100][100], int n ) {
    float b[100][100];
    for ( int i=0 ; i<n ; i++){
        for ( int j=0 ; j<n ; j++){
            if ( i=j ) 
                b[i][j]=1;
            else 
                b[i][j]=0; 
        }
    }
    b[0][0]=1;
    for ( int i=0 ; i<n ; i++ ){
        for ( int j=i+1 ; j<n ; j++ ){
            for ( int t=n-1 ; t>=0 ; t--){
                b[j][t]=-((float)a[j][i]/a[i][i])*b[i][t]+(b[j][t]);
                a[j][t]=-((float)a[j][i]/a[i][i])*a[i][t]+(a[j][t]);
            }
        }
    }
    for ( int i=n-1 ; i>=0 ; i-- ){
        for ( int j=i-1 ; j>=0 ; j-- ){
            for ( int t=0 ; t<n ; t++){
                b[j][t]=-((float)a[j][i]/a[i][i])*b[i][t]+(b[j][t]);
                a[j][t]=-((float)a[j][i]/a[i][i])*a[i][t]+(a[j][t]);
            }
        }
    }

    printf("Inverse matrix :\n");
    for ( int i=0 ; i<n ; i++ ){
        for ( int j=0 ; j<n ; j++ ){
            b[i][j]=(float)b[i][j]/a[i][i];
            printf("%f ",b[i][j]);
        }
        printf("\n");
    }
}