#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int S[MAX];
int tos;
void printStack() {
  int i;
for(i=0; i<=tos; i++) {
printf("\t%d", S[i]);
}
printf("\n");
}
void push(int a) {
  if(tos==MAX-1) {
printf("Stack full\n");
exit(1);
  }
tos++;
S[tos]=a;
}
int pop() {
  if(tos==-1) {
printf("Stack empty\n");
return -1;
  }
return S[tos--];
}
int main() {
  tos=-1;
push(22);
push(40);
printStack();
printf("%d\n", pop());   //print the value popped from the stack
printStack();   //print stack after popping
return 0;
}
