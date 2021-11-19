#include<stdio.h>
#include<stdlib.h>

struct linklist{
    int data;
    struct linklist * next; 
};


int main(){
    struct linklist * a = NULL;
    struct linklist * b = NULL;
    struct linklist * c = NULL;

    a = (struct linklist*)malloc(sizeof(struct linklist));
    b = (struct linklist*)malloc(sizeof(struct linklist));
    c = (struct linklist*)malloc(sizeof(struct linklist));

    a->data = 10;
    b->data = 20;
    c->data = 30;

    a->next = b;
    b->next = c;
    c->next = NULL;

// Traverse a Linked List
    while(a != NULL){
        printf("%d-> ", a->data);
        a = a->next;
    }
    return 0;
}