#include<stdio.h>

int main(){
    int x;
    printf("Enter your age: \n");

    scanf("%d", &x);

    if(x < 2){
        printf("You are Infant\n");
    }else if(x >= 2 && x < 10){
        printf("You are a Child");
    }else if(x >= 10 && x < 20){
        printf("Yor are Teenage");
    }else if(x >= 20 && x < 30){
        printf("You are Adult");
    }else if(x >= 30){
        printf("You are a old guy");
    }

    // if(x == 1){
    //     printf("You enter a integer number of : %d\n", x);
    // }else if(x == 2){
    //     printf("You enter a integer number of : %d\n", x);
    // }else if(x == 3){
    //     printf("You enter a integer number of : %d\n", x);    
    // }else{
    //     printf("You are violated the condition");
    // }
}