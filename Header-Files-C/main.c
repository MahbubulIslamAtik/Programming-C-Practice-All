#include<stdio.h>
#include "my-header.h"
int main(){
    printf("Sum = %d\n", SUM);
    printf("Name from header file: %s\n", NAME);
    sum(10, 20);
    return 0;
}