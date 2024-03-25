#include<stdio.h>
#include"string.h"

int reverse(char str[] ,int i){
    if (i<strlen(str))
        printf("%c",str[i]);
    reverse(str,i+1);
}

int main(){
    char str[100];
    gets(str);
    reverse(str,0);
    return(0);
}