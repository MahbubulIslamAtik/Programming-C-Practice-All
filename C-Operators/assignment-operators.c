#include<stdio.h>

int main(){
    int a = 21;
    int c;

    c = a;
    printf("Line 1 - = Operator Example, Value of c = %d\n", c);

    c +=a;
    printf("Line 2 - += Operator Example, Value of c= %d\n", c);

    c -=a;
    printf("Line 3 - -= Operator Example, Value of c= %d\n", c);

    c *=a;
    printf("Line 3 - *= Operator Example, Value of c= %d\n", c);

    c /=a;
    printf("Line 3 - /= Operator Example, Value of c= %d\n", c);

    c = 200;
    c %=a;
    printf("Line 3 - %= Operator Example, Value of c= %d\n", c);

    c <<=2;
    printf("Line 3 - <<= Operator Example, Value of c= %d\n", c);

    c >>=2;
    printf("Line 3 - >>= Operator Example, Value of c= %d\n", c);

    c &= 2;
    printf("Line 3 - >>= Operator Example, Value of c= %d\n", c);

    c ^= 2;
    printf("Line 3 - ^= Operator Example, Value of c= %d\n", c);

    c |= 2;
    printf("Line 3 - |= Operator Example, Value of c= %d\n", c);
}