#include<stdio.h>

int main(){
    // char str[] = "Harry";
    char str[] = {'H', 'a', 'r', 'r', 'y', '\0'};
    char *ptr ;
    ptr= &str[0];
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}