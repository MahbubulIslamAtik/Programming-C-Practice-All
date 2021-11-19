#include<stdio.h>
// #include<float.h>

// extern int a, b;
// extern int c;
// extern float f;

// #define LENGTH  10
// #define WIDTH 5
// #define NEWLINE '\n'

// void func(void);

// static int count = 5;

int count;
extern void write_extern();

int main(){
    // printf("Storage size for float : %d\n", sizeof(float));
    // printf("Minimum float positive value: %E\n", FLT_MIN);
    // printf("Maximum float position value: %E\n", FLT_MAX);
    // printf("Precision value: %d", FLT_DIG);
    // return 0;

    // int a, b;
    // int c;
    // float f;

    // a = 10;
    // b = 20;
    // c = a + b;

    // printf("Value of c : %d \n", c);
    // f = 70.0/3.0;
    // printf("value of f : %f \n", f);
    // return 0;

    // printf("Hello\tWorld\n\n");
    // return 0;

    // int area;
    // area = LENGTH * WIDTH;
    // printf("value of area : %d", area);
    // printf("%c", NEWLINE);
    // return 0;

//     while(count--){
//         func();
//     }
//     return 0;

    write_extern();
}

// void func(void){
//     static int i = 5;
//     i++;
//     printf("i is %d and count is %d\n", i, count);
//}

