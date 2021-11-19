#include<stdio.h>

int main(){

    // float x,y;
    // printf("Enter value for x and y:  \n");
    // scanf("%f%f", &x, &y);

    // printf("You entered: %.2f and %.2f\n", x, y);

    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    float average = (a + b + c)/3.0;
    printf("Value of a: %d\n", a);
    printf("Value of a: %d\n", b);
    printf("Average of a, b and c: %.2f\n", average);


    return 0;
}