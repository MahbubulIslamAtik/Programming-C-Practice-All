#include<stdio.h>

void even_odd(int x){
    if(x % 2 == 0)
        printf("This number is Even Number: %d\n", x);
    else
        printf("This number is ODD Number: %d\n", x);
}


int main(){
    even_odd(10);
    return 0;
}