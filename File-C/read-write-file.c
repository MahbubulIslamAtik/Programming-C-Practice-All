#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    fp = fopen("donation.txt", "r");
    // int c;
    // int cCounter = 0, vCounter = 0, sCounter = 0;
    

    // char name[20];
    // int donation = 0;
    // int i;

    // for(i = 0; i<5; i++){
    //     printf("Please, Enter your name: \n");
    //     scanf("%s", name);

    //     printf("Enter amount:\n");
    //     scanf("%d", &donation);

    //     fprintf(fp,"%s %d\n", name, donation);
    // }

    char b[20];
    int sum = 0;
    while(1){
        int result = fscanf(fp, "%s", b);
        if(result == EOF){
            break;
        }
        printf("%s ", b);

        result = fscanf(fp, "%s", b);
        if(result == EOF){
            break;
        }
        printf("%s\n", b);
        sum = sum + atoi(b);
    }

    printf("Total donation: %d\n", sum);
    

    return 0;
}