#include<stdio.h>

int get_sum(int x, int y){
    int sum = x + y;
    return sum;
}

void say_hi(){
    printf("Hey");
}

int main(){
    printf("\nThe main function is start\n");
    say_hi();
    int result = get_sum(10,20);
    printf("\nTotal value of : %d\n", result);
    return 0;
}