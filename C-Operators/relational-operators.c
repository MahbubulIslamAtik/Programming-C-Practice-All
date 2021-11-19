#include<stdio.h>

int main(){
    int a =10;
    int b = 20;
    int c;

    if( a == b){
        printf("Line 1 - is equal to b\n");
    }else{
        printf("Line 1 - is not equal to b\n");
    }

    if(a < b){
        printf("Line 2 - is less than b\n");
    }else{
        printf("Line 2 - is not less than b\n");
    }
    if ( a > b){
        printf("Line 3 - is greater than b\n");

    }else{
        printf("Line 3- is not greater than b\n");
    }

    if(a <= b){
        printf("Line 4 - is less than or equal to b\n");
    }else{
        printf("Line 4 - is not less than or equal to b\n");
    }

    if(a >= b){
        printf("Line 5 - is greater than or equal to b\n");
    }else{
        printf("Line 6 - is not greater than or equal to b\n");
    }


}