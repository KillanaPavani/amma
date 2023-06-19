//bubble sort in ascending order
#include<stdio.h>
int main()
{
 #define MAX 7
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
 for(int i=1;i<MAX;i++)
 {
  for(int j=0;j<MAX;j++)
  {
   if(array[j]>array[j+1])
   {
    int temp=array[j];
    array[j]=array[j+1];
    array[j+1]=temp;
   }
  }
 }
 printf("\nelements after insertion\n");
 for(int i=0;i<MAX;i++)
 {
  printf("%d ",array[i]);
 }
 return 0;
}
