#include<stdio.h>

int main()
{   

    int b[]={1,2,3,4,5};
    int *i_pointer=b,size = 5;
    for (int i = 0; i < size; i++) {
        printf("*(y + %d) = %d\n", i, *(i_pointer + i));
    }
    return(0);
}