#include <stdio.h>
#include<stdlib.h>

int main() 
{
    int *ptr,n;
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for ( int i=0 ; i<n ; i++ )
    {
        scanf("%d",ptr+i);
    }
    for ( int i=0 ; i<n ; i++ )
    {
        printf("\n%d",*(ptr+i));
    }
    //printf("%d",ptr);
    return 0;
}
