#include<stdio.h>
// int main(){
//     int i = 1;
//     for(i = 1; i <= 200; i++){
//         if(i%2==0){
//             printf("This is prime number %d\n", i);
//         }
//     }
    
//     for(i = 1; i <= 200; i++){
//         if(i%2==1){
//             printf("This is Odd number: %d\n", i);
//         }
//     }
//     return 0;
// }

int main ()
{
 /* local variable definition */
 int i, j;
 
 for(i=2; i<100; i++) {
 for(j=2; j <= (i/j); j++)
 if(!(i%j)) break; // if factor found, not prime
 if(j > (i/j)) {
     printf("%d is prime\n", i);
     }
 }
 return 0;
}