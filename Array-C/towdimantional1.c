#include<stdio.h>

int main(){
    /* as array with 10 row and 5 columns */
    int i, j;
    int a[8][4] = {{0,0}, {1,2}, {2,4}, {3,6}, {4, 8}, {5, 10}, {6,12}, {7,14}};

    for(i=0; i<8; i++){
        for(j=0; j<5; j++){
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }
 return 0;
}