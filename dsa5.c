#include<stdio.h>
#include<stdlib.h>

void readMat(int(*a)[4]) {
  int i,j;
for(i=0; i<4; i++) {
for(j=0; j<4; j++) {
a[i][j]  = rand()%100;
}
}
}

void printMat(iny(*a)[4]) {
  int i,j;
for(i=0; i<4; i++) {
for(j=0; j<4; j++) {
printf("%d\t", a[i][j]);
}
printf("\n");
}
}

void matProduct(int(*a)[4], int(*b)[4], int(*r)[4]) {
  int i,k,j;
for(i=0; i<4; i++) {
for(j=0; j<4; j++) {
r[i][j] = 0;
for(k=0; k<4; k++) {
r[i][j] = r[i][j]+a[i][k]*b[k][j];
}
}
}
}

int main() {
  int arr[4][4], arr2[4][4], res[4][4];
readMat(arr);
readMat(arr2);
printMat(arr);
printMat(arr2);
matProduct(arr,arr2,res);
printMat(res);
}
