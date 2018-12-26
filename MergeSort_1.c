#include<stdio.h>
#include<conio.h>

int b[20];  // this is just an auxilary array used for storing sorted values then write back to arr[]

void merge(int[], int, int, int);
void mergeSort(int[], int, int);

void main(){
	int arr[20];
	int i, n;
	printf("\nEnter size of array not more than 20:  ");
	scanf("%d",&n);
	if(n>20){
		printf("\nError: Enter a valid input size.");
		return;
	}
	printf("\nEnter the array elements for merge sort: \n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	mergeSort(arr, 0, n-1);
	printf("\n\nSorted array is: \n");
	for(i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}
//======================================================================================================================
void mergeSort(int arr[], int begin, int end){
	if(begin < end){
		int mid = (begin + end) / 2;
		mergeSort(arr, begin, mid);
		mergeSort(arr, mid+1, end );
		merge(arr, begin, mid, end);
	}
}
//=======================================================================================================================
void merge(int arr[], int begin, int mid, int end){
	int i1 = begin; // index of b[]
	int i = begin;  // index of arr[]
	int j = mid+1;
	
	while(i<=mid && j<=end){
		if(arr[i] <= arr[j]){
			b[i1] = arr[i];
			i++;
			i1++;
		}
		else{
			b[i1] = arr[j];
			j++;
			i1++;
		}
	}
	// insert remaining elements into b[]
	if(i <= mid){
		while(i <= mid){
			b[i1] = arr[i];
			i++;
			i1++;
		}
	}
	else if(j <= end){
		while(j <= end){
			b[i1] = arr[j];
			j++;
			i1++;
		}
	}
	// write back sorted elements in arr[]
	for(i = begin; i <= end; i++){
		arr[i] = b[i];
	}
}
