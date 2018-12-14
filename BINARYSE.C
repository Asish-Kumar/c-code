#include<stdio.h>
#include<conio.h>

int algo(int[],int,int,int,int);

void main(){
//input data is already sorted
int array[10],begin=0,end=9,mid = 4,item, i, location;
clrscr();
printf("Enter 10 sorted values: \n");
for(i=0;i<10;i++){
   scanf("%d",&array[i]);
}
printf("\nEnter the item to search: \n");
scanf("%d",&item);


location =  algo(array,begin,mid, end, item);
if(location > -1)
	printf("\nValue present at index %d",location);
else
	printf("\nValue does not belong to the array.");
getch();
}

int algo(int array[],int begin, int mid, int end,int item){
 if(end==begin && item != array[mid])
    return -1;
 if(item == array[mid])
    return mid;
 else{
  if(item < array[mid]){
    end = mid-1;
    mid = begin + (end - begin)/2;
   /* if((end-begin)%2 == 0 ){  //even difference
      mid =  begin + (end-begin)/2;
    }
    else{  // odd difference
      mid = begin + (end-begin-1)/2;  //floor function
    }*/
    return algo(array,begin,mid,end,item);
  }
  else{
    begin = mid + 1;
    mid = begin + (end-begin)/2;
    return algo(array,begin,mid, end,item);
  }
 }

}
