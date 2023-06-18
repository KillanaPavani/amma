//insertion sort
#include<stdio.h>
int main()
{
 #define MAX 5
 int array[MAX];
 //printf("enter the array elements:\n");
 for(int i=0;i<MAX;i++)
 {
  printf("enter the array elements:\n");
  scanf("%d",&array[i]);
 }
 printf("elements before insertion\n");
 for(int i=0;i<MAX;i++)
 {
  printf("%d ",array[i]);
 }
//my loop should be traverse from index 0 to its last index
for(int i=1;i<MAX;i++)
{ //my temp is storing the element in the unsorted list 
  int temp=array[i];
  //we declare j here is because to find the appropriate place of temp variable by comparing it with elements in sorted array
  int j=i-1;
  //this loop is going to check the whether the temp is smaller then the elements in the sorted array or not
  while(j>=0 && temp<array[j])
  { //if the above condition is true then temp should be replaced with before index
    array[j+1]=array[j];
    //now we decreasing the index of j to replace sorted array element with unsorted array element
    j--;
  }
  //now we replaced 
  array[j+1]=temp;
 }
 printf("\nelements after insertion\n");
 for(int i=0;i<MAX;i++)
 {
  printf("%d ",array[i]);
 }
return 0;
}
