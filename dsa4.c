#include<stdio.h>
void inputArr(int a[], int n) {
    int i;
    printf("Enter %d elements:\n", n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}
void printArr(int a[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
}
void bubbleSort(int a[], int n){
    int i, j, temp;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(a[j] > a[j+1]){
                // Swap the elements
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    inputArr(arr, n);
    printf("\nOriginal array:\n");
    printArr(arr, n);
    bubbleSort(arr, n);
    printf("\nSorted array:\n");
    printArr(arr, n);
    return 0;
}
