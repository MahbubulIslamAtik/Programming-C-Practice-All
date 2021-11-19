#include<stdio.h>

int main(){
    FILE *fp;

    fp = fopen("test_file.txt", "w");
    int i;
    for(i=65; i<90; i++){
        fputc(i, fp);
    }

    char arr[100] = "Hi, I am Good!";
    fputs(arr, fp);
    fprintf(fp, "My id is: %d\n", 100);

    fclose(fp);

    return 0;
}