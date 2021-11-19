#include<stdio.h>

int main(){
    int arr[] = {-3, 2, 5, 7, 4, 8, 9, 100, 29, 6, 1};
    int searchArray = 6;
    int i;

    for(i = 0; i < 10; i++){
        if(arr[i] == searchArray){
            printf("The Item Index number of : %d\n", i);
            return 0;
        }
    }
    printf("The item number is NOT found");
}