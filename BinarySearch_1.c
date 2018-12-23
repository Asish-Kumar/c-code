#include<stdio.h>
#include<conio.h>

int BSearch(int[],int,int,int);

void main(){
	int arr[10];
	int item;
	int i;
	int itemFoundIndex;
	printf("\nEnter the sorted int array:\n");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the value to search for: ");
	scanf("%d",&item);
	
	itemFoundIndex = BSearch(arr,0,9,item);
	if(itemFoundIndex == -1)
		printf("\nItem not found.");
	else if(itemFoundIndex >= 0 && itemFoundIndex <= 9)
		printf("\nItem found at %d index.",itemFoundIndex);
	else
		printf("\n!!!Some unexpected error occured!!!");
}

int BSearch(int arr[],int begin, int end, int item){
	int mid = (begin + end)/2;
	if(arr[mid] == item)
		return mid;
	if(begin==end && item != arr[begin])
		return -1;  //item not found.
	if(item < arr[mid])
		end = mid;
	else
		begin = mid+1;
	return BSearch(arr,begin, end, item);
}