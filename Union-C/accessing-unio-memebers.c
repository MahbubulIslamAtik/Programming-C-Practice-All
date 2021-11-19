#include<stdio.h>
#include<string.h>

union Data{
    int i;
    float f;
    char Str[20];
};

int main(){
    union Data data;
    data.i = 10;
    data.f = 220.5;
    strcpy(data.Str, "C Programming");

    printf("data.i : %d\n", data.i);
    printf("data.f : %f\n", data.f);
    printf("data.str : %s\n", data.Str);
    return 0;
}