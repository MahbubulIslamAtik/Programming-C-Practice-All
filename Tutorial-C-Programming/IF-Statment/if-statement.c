#include<stdio.h>

 int main(){
//     int a;
//     printf("Enter the value of a: \n");
//     scanf("%d", &a);

//     if(a % 3 == 0 || a % 5 == 0){
//         printf("The number is divisible by 3 or 5. ");
//     }else{
//         printf("The number is not divisible by 3 or 5.");
//     }

    // int b;
    // printf("Enter your Number : \n");
    // scanf("%d", &b);

    // if(b % 2 == 0){
    //     printf("This number is EVEN Number");
    // }else{
    //     printf("This number is ODD Number");
    // }

    char ch;
    printf("Enter the value to test : \n");
    scanf("%c", &ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("%c is Vowel\n", ch);
    }else{
        printf("%c is Consonente\n", ch);
    }

    return 0;
}