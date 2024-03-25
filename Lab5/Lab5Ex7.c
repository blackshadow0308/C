#include<stdio.h>
#include<string.h>

int main (){
    char str[100];
    char *sub_str;
    gets(str);
    int j=0;
    printf("Their orders in the string:\n");
    for ( int i=0 ; i<strlen(str) ; i++ ){
        if (str[i]=='a') {
            j=j+1;
            printf("%d ",i);
        }
    }
    printf("\nNumber of the character 'a': \n%d ", j);
    return(0);
}