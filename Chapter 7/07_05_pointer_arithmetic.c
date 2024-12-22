#include<stdio.h>

int main(){
    // int i = 34;
    // int *ptr = &i;
    // printf("The value of ptr is %u\n", ptr);
    // // ptr = ptr - 1;
    // ptr = ptr + 1;
    // // ptr++;
    // // ptr++;
    // printf("The value of ptr is %u\n", ptr);

    // char c = '3';
    // char *ptr = &c;
    // printf("The value of ptr is %u\n", ptr);
    // // ptr = ptr - 1;
    // ptr = ptr + 1;
    // ptr = ptr + 1;
    // // ptr++;
    // // ptr++;
    // printf("The value of ptr is %u\n", ptr);

    float f = 3.4;
    float *ptr = &f;
    printf("The value of ptr is %u\n", ptr);
    // ptr = ptr - 1;
    ptr = ptr + 1;
    // ptr = ptr + 1;
    // ptr++;
    // ptr++;
    printf("The value of ptr is %u\n", ptr);
    float g=4.3;
    float *ptr1 = &g;
    int x=ptr1-ptr;
    printf("ptr = %u\n",ptr);
    printf("ptr1 = %u\n",ptr1);
    printf("subtraction of pointers is: %d",x);

    return 0;
}