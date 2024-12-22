#include<stdio.h>
#include<string.h>
 
struct employee{
    int code;
    int age;
    float salary;
    char name[20];
};
 
int main(){
    struct employee harry = {100, 30, 34.23, "Harry"};
 
    printf("Code is: %d \n", harry.code);
    printf("Salary is: %f \n", harry.salary);
    printf("Name is: %s \n", harry.name);
    printf("Age is: %d \n", harry.age);
 
   return 0;
}