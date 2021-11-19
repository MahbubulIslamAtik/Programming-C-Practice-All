#include<stdio.h>

int main(){
    int arr[7] = {-125, 99, 154, 200, 432, 43, 124};
    int max = arr[0];
    int i;

    for(i = 0; i < 7; i++){
        if(arr[i] >= max){
            max = arr[i];
        }
    }
    printf("The maximum value is : %d", max);
}