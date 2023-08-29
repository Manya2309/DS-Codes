#include<stdio.h>

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
}
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int imin=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[imin]){
                imin=j;

            }
        }
        int temp=arr[i];
        arr[i]=arr[imin];
        arr[imin]=temp;
    }
}

int main(){
    int arr[]={31,23,26,29,65,69,88,15,5,1};
    int n=10;
    printf("Unsorted array: ");
    printArray(arr,n);
    selectionSort(arr,n);
    printf("\nSorted array: ");
    printArray(arr,n);
}
