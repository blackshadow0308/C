#include<stdio.h>
#include<string.h>

int main(){
    char str[100],x;
    gets(str);
    scanf("%c",&x);
    for ( int i=0 ; i<strlen(str) ; i++ ){
        if (str[i]==x) 
            for ( int j=i ; j<strlen(str) ; j++ ){
                str[j]=str[j+1];
            }
    }
    printf("%s ",str);
    return(0);
}