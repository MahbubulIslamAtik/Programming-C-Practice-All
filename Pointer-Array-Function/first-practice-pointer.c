#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[5] = {1,2,3,4,5};
    int *ptr = &a[3];
    printf("%d\n", *ptr);
    printf("%d\n", *(ptr+1));
    printf("%d\n", *(ptr - 1));
    int i, sum = 0;
    // for(i = 0; i<5; i++){
    //     sum = sum + *(a + i);
    //     //printf("%d ", *(a + i));
    // }

    // //printf("Address of a: %u\n", a);
    // printf("sum = %d\n", sum);
    return 0;
}