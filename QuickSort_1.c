#include<stdio.h>
#include<conio.h>

void quickSort(int[],int,int);

void main(){
	int arr[20];
	int i, n;
	printf("\nEnter the number of elements to sort (<21):  ");
	scanf("%d",&n);
	if(n>20){
		printf("\nError: Enter size of array less than 21.");
		return;
	}
	printf("\nEnter the array elements: \n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	quickSort(arr, 0, n-1);
	
	printf("\nSorted values are: \n");
	for(i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}
//=======================================================================
void quickSort(int arr[], int begin, int end){
	int i = begin + 1;
	int j = end;
	int temp;
	if(begin < end){
		while(i < j){
			while(arr[begin] >= arr[i] && i < end){
				i++;
			}
			while(arr[begin] < arr[j]){
				j--;
			}
			
			if(i < j){
				//swap arr[i] and arr[j]
				temp =  arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			
		}
		if(j > begin){
			if(arr[begin] > arr[j]){
				temp = arr[begin];
				arr[begin] = arr[j];
				arr[j] = temp;
			}
			quickSort(arr, begin, j-1);
		}
		quickSort(arr, j+1, end);
	}
}