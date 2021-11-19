#include<stdio.h>

int main(){
    int arr[10], i, sum = 0;
    for(i=0; i<=10; i++){
        scanf("%d\n", &arr[i]);
    }

    for(i = 0; i<=10; i++){
        sum = sum + arr[i];
    }

    printf("Total array is : %d\n", sum);
}