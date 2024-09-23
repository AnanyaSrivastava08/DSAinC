#include<stdio.h>
#include<stdlib.h>
struct Node {
int data;
struct Node* next;
};
struct Node* InsertFirst(struct Node* head, int a) {
  struct Node *new, *cur;
cur=head;
new = (struct Node*)malloc(size of(struct Node));
new->data=a;
if(head==NULL) {
new->next=new;
return new;
} else {
new->next=head;
while(cur
