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
while(cur->next!=head) {
cur=cur->next;
}
cur->next=new;
}
return new;
}
void PrintNode(struct Node* head) {
  struct Node* cur;
cur=head;
do {
printf("%d->", cur->data);
cur=cur->next;
}
  while(head!=cur);
}
int main() {
  struct Node* head=NULL;
head=InsertAtFirst(head,23);
head=InsertAtFirst(head,56);
PrintNode(head);
}
