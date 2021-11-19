#include<stdio.h>

int main(){
    int a, sum = 0;
//    for(a = 100; a >=0; a = a - 10){
//        printf("%d\n", a);
//    }

   for(a = 30; a <= 120; a++){
       if(a % 3 == 0 && a % 5 ==0){
           sum = sum + a;
       }
   }
   
       printf("Summation: %d\n", sum);
}