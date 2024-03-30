#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *(*ptr);
    int *arr[3];

    for (int i = 0; i < 3; i++)
    {
        arr[i] = malloc(sizeof(int));
    }

    int num1 = 1, num2 = 2, num3 = 3;

    arr[0] = &num2;
    arr[1] = &num2;
    arr[2] = &num3;
    
    ptr=&(*arr);
    printf("%d\n",*arr[2]);
    printf("%d",*(*ptr));
    return 0;
}
