#include<stdio.h>

int main(){
    FILE *fp;
    fp = fopen("data.txt", "r");
    int c;
    int cCounter = 0, vCounter = 0, sCounter = 0;
    while(1){
        c = fgetc(fp);
        if(c == EOF){
            break;
        }
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            vCounter++;
        }else if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            vCounter++;
        }else{
            cCounter++;
        }
    }

    printf("Vowels: %d\n", vCounter);
    printf("Counter: %d\n", cCounter);
    printf("Space and newLine: %d\n", sCounter);

    return 0;
}