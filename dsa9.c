#include<stdio.h>
#include<stdlib.h>
struct Node {
int data;
struct Node* next;
};
struct Node* createNode(int data) {
  struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
if(!newNode) {
printf("Memory error\n");
return NULL;
}
newNode->data=data;
newNode->NEXT=NULL;
return newNode;
}
void insertAtStart(struct Node** head, int data) {
  struct Node* newNode=createNode(data);
newNode->next=*head;
*head=newNode;
printf("Node insert at start.\n");
}
void insertAtEnd(struct Node** head, int data) {
  struct Node* newNode=createNode(data);
if(*head==NULL) {
*head=newNode;
printf("Node inserted at the end.\n");
  return;
}
struct Node* temp= *head;
while(temp->next!=NULL) {
temp=temp->next;
}
temp->next=newNode;
printf("Node inserted at the end.\n");
}
void insertInBetween(struct Node** head, int data, int position){
  if(position<1) {
printf("Invalid position.\n");
return;
  }
if(position==1) {
insertAtStart(head,data);
return;
}
struct Node* newNode=createNode(data);
struct Node* temp= *head;
for(int i=1; i<postion-1 && temp!=NULL; i++) {
temp=temp->next;
}
if(temp==NULL) {
printf("Position out of bounds.\n"):
  return;
}
newNode->next=temp->next;
temp->next=newNode;
printf("Node inserted at position %d.\n", position);
}
void displayList(struct Node* head) {
  if(head==NULL) {
printf("List is empty.\n");
return;
  }
printf(Linked list:");
  while(temp!=NULL) {
printf("%d->", temp->data);
temp=temp->next;
}
printf("NULL\n");
}
int main() {
  struct Node* head=NULL;
insertAtStart(&head,10);
displayList(head);
insertAtEnd(&head,20);
displayList(head);
insertInBetween(&head,15,2);
displayList(head);
insertAtStart(&head,5);
displayList(head);
insertAtEnd(&head,30);
displayList(head);
return 0;
}
