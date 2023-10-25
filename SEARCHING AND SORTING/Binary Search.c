#include<stdio.h>
 
int binarySearch(int arr[], int size, int key){
    int low, mid, high;
    low = 0;
    high = size-1;
    
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid]<key){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
	}
    return -1;
}
 
int main(){
   
    int arr[] = {1,6,17,49,68,95,150,333,500};
    int size = sizeof(arr)/sizeof(int);
    int key = 150;
    int b = binarySearch(arr, size, key);
    printf("The element %d was found at position %d \n", key,b);
    return 0;
}
