#include<stdio.h>

int main(){
    int var1;
    int var2[10];

    printf("Address of var1 variable: %x\n", &var1);
    printf("Address of var2 variable: %x\n", &var2);
    return 0;
}

/* Valid pointer declaration */
// int *ip;
// double *dp;
// float *fp;
// char *ch;