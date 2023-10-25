#include<stdio.h>

int recursiveBinarySearch(int arr[], int size, int key,int l,int h){
   
    while(l<=h){
       int mid = (l + h)/2;
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid]<key){
            return recursiveBinarySearch(arr,size,key,mid+1,h);
        }
        else{
            return recursiveBinarySearch(arr,size,key,l,mid-1);
        }
    } 
    return -1;
}

int iterativeBinarySearch(int arr[], int size, int key){
    int l,mid,h;
    l = 0;
    h = size-1;
    
    while(l<=h){
        mid = (l + h)/2;
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid]<key){
            l = mid+1;
        }
        else{
            h = mid -1;
        }
	}
    return -1;
}
 
 
int main(){
	int choice,p,size,key;
	printf("Enter size of the array: ");
	scanf("%d",&size);
	
	int l=0;
	int h=size-1;
	int arr[size];
	
	printf("Enter the sorted elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search for: ");
    scanf("%d", &key);
    
	printf("What do you want to do ?\n");
	printf("1. Iterative binary search\n2. Recursive binary search\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			p = recursiveBinarySearch(arr, size, key,l,h);
            break;
        case 2:
            p = iterativeBinarySearch(arr,size,key);
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
	}
	if (p != -1) {
        printf("Element %d found at index %d.\n", key, p);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
