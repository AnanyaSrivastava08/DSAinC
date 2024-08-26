#include<stdio.h>
void inputArr(int a[], int n) {
    int i;
    for(i=0; i<n; i++){
        printf("\n Enter element %d:\n", i+1);
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
int deleteEle(int e, int a[], int n){
    int i, j;
    for(i=0; i<n; i++){
        if(a[i] == e){
            for(j=i; j<n-1; j++){
                a[j] = a[j+1]; 
            }
            return n-1; 
        }
    }
    return n; 
}
int main(){
    int arr[100], n, ele, newSize;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    inputArr(arr, n);
    printf("\nOriginal Array:\n");
    printArr(arr, n);
    printf("\nEnter the element to delete: ");
    scanf("%d", &ele);
    
    newSize = deleteEle(ele, arr, n);
    if(newSize < n){
        printf("\nElement deleted successfully.\n");
    } else {
        printf("\nElement not found.\n");
    }
    printf("\nUpdated Array:\n");
    printArr(arr, newSize);
    return 0;
}
