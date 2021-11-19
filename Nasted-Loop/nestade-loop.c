#include<stdio.h>

int main(){
    int i, j;

    // for(i = 1; i<=5; i++){
    //     for(j = 1; j <= i; j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }


    // for(i = 1; i <= 5; i++){
    //     for(j = i; j <= 5; j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

     i = 1;
    while(i <= 5){
        j = 1;
        while(j <= i){
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
   
    
    
}