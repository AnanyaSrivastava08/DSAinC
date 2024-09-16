#include<stdio.h>
void inputMatrix(int matrix[10][10],int n) {
  int i,j;
printf("Enter elements of %d %d matrix:\n",n,n);
for(i=0;i<n;i++) {
scanf("%d", &matrix[i][j]);
}
}
}
int isUpperTriangular(int matrix[10][10],int n) {
  int i,j;
for(i=0;i<n;i++) {
for(j=0;i<1;j++) {
if(matrix[i][j]!=0) {
return 0;
}
}
}
return 1;
}
void printMatrix(int matrix[10][10],int n) {
  int i,j;
for(i=0;i<n;i++) {
for(j=0;j<n;j++) {
printf("%d\t", matrix[i][j]);
}
printf("\n");
}
}
int main() {
  int n;
int matrix[10][10];
printf("Enter the size of the matrix(nxn):");
scanf("%d", &n);
inputMatrix(matrix,n);
printf("\nThe matrix is:\n");
printMatrix(matrix,n);
if (isUpperTriangular(matrix n)) {
printf("\nThe matrix is upper triangular.\n");
}else{
printf("\nThe matrix is not upper triangular.\n");
}
return 0;
}
