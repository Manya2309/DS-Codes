#include<stdio.h>
 
int recursiveBinarySearch(int arr[], int size, int key,int low,int high){
   
    while(low<=high){
       int mid = (low + high)/2;
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid]<key){
            return recursiveBinarySearch(arr,size,key,mid+1,high);
        }
        else{
            return recursiveBinarySearch(arr,size,key,low,mid-1);
        }
    } 
    return -1;
}
 
int main(){
   
    int arr[] = {1,6,17,49,68,95,150,333,500};
     int low, high;
    low = 1;
    
    int size = sizeof(arr)/sizeof(int);
    high = size;
    int key = 95;
    int b = recursiveBinarySearch(arr, size, key,low ,high);
    printf("The element %d was found at position %d \n", key,b);
    return 0;
}
