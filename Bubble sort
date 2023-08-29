#include<stdio.h>

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[],int n){
	int rounds=0;
    for(int i=0;i<n;i++){
    	rounds++;
    	int flag=1;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                flag=0;
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        if(flag==1){
            break;
        }
    }
    printf("Number of rounds= %d\n",rounds);
}


int main(){
	int n,i;
	printf("Enter number of elements in the array:");
	scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
    	scanf("%d",&arr[i]);
	}
    printf("\nUnsorted array: ");
    printArray(arr,n);
    bubbleSort(arr,n);
    printf("Sorted array: ");

    printArray(arr,n);
}
