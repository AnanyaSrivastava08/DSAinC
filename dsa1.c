#include<stdio.h>
void inputArr(int a[]) {
    int i;
    a[0]=34, a[1]=67, a[2]=45, a[3]=78, a[4]=93, a[5]=104, a[6]=59;
    for(i=0; i<10; i++){ }                                 //printf("\n Enter no.:");
                                                           //scanf("%d", &a[i]);
                                                              
}
void printArr(int a[]){
    int i;
    for(i=0; i<10; i++){
        printf("%d\t", a[i]);
    }
}
int FindEle(int e, int a[]){
    int i;
    for(i=0; i<10; i++){
        if(a[i]==e){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[10], ele, loc;
    
    inputArr;
    printArr;
    printf("\n Enter No. to search:");
    scanf("%d", &ele);
    loc= FindEle(ele, arr);
    if(loc!= -1){
        printf("\n Element found at location:%d", loc);
    }
    else{
        printf("\n Element not found..");
    }
}
