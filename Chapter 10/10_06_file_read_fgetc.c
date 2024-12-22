#include<stdio.h>

int main(){
    FILE *ptr;
    char c;
    ptr = fopen("getcdemo.txt", "r");
    c = fgetc(ptr);
    // printf("%c\n",c);
    while(c!=EOF){
        printf("%c", c);
        c = fgetc(ptr);
    }
    return 0;
}