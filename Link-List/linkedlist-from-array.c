#include<stdio.h>
#include<stdlib.h>

struct Node *createLinkList(int arr[], int size);

struct Node{
    int data;
    struct Node *next;
};

int main(){
    int a[] = {5, 10, 30};
    createLinkedList(a, 3);
    return 0;
};

struct *createLinkedList(int arr[], int size){
    struct Node *head = NULL; *temp = NULL; *current = NULL;

    
    int i;
    for(i = 0; i<size; i++){
        temp =(struct Node *) malloc(sizeof(struct Node));
    }
}