//selection sort
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
 for(int i=0;i<MAX-1;i++)
 {
  int min=i;
  for(int j=i+1;j<MAX;j++)
  {
   if(array[min]>array[j])
   {
    min=j;
   }
  }
  if(min!=i)
  {
   int temp=array[min];
   array[min]=array[i];
   array[i]=temp;
  }
 }
 printf("\nelements after insertion\n");
 for(int i=0;i<MAX;i++)
 {
  printf("%d ",array[i]);
 }
 return 0;
}
