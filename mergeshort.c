#include<stdio.h>
#include<conio.h>

int arr[10];
void merge_sort(int,int);
int[] merge(int[], int, int, int);

void main(){
	int i;
	printf("\nEnter the input stream of 10 length.");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	merge_sort(0,9);
	printf("\n\nSorted stream is: \n ");
	for(i=0;i<10;i++){
		printf("%d  ",arr[i]);
	}
}

void merge_sort(int low, int high){
	int temp_arr[high+1];
	int i;
	if(low == high){
		return;
	}
	mid  = (low+high-1)/2;
	merge_sort(low,mid);
	merge_sort(mid+1,high);
	temp_arr[] = merge(arr,low,mid,high);
	for(i=0;i<=high;i++){
		arr[i]==temp_arr[i];
	}
}

int[] merge(int arr[],int low,int mid,int high){
	int m = mid+1;
	int temp_arr[high+1] =-1;
	int i = 0;
	while(1){
		if(low <= mid && m <= high){
			if(arr[low] > arr[m]){
				//insert arr[m]	to	temp_arr[i]
				temp_arr[i] = arr[m];
			}
			else{
				//insert arr[low]	to	temp_arr[i]
				temp_arr[i] = arr[low];
			}
		}
		else if(low <= mid){
			//append rest of the left array
			for(;low <= mid;low++){
				temp_arr[i] = arr[low];
				i++;
			}
		}
		else if(m <= high){
			//append rest of the right array
			for(;m <= high;m++){
				temp_arr[i] = arr[m];
				i++;
			}
		}
		i++;
	}
	return temp_arr;
}