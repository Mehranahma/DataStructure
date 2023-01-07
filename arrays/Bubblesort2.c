#include<stdio.h>
void swap(int* xp,int* yp)
{
  int temp=*xp;
  *xp=*yp;
  *yp=temp;
}

void bubbleSort(int arr[],int n)
{
   int i,j;

   for (i=0;i<n-1;i++)
   
    for(j=0;j<n-i-1;j++)
    
        if(arr[j]>arr[j+1])
        
        swap(&arr[j],&arr[j+1]);

        
    
   }

   void printArray(int arr[],int n)
   {
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
   }
   
   }

   int main()
   {
    int arr[]={7,2,5,3,6,4,1};
    
    int n=sizeof(arr)/sizeof(arr[0]);
      
    bubbleSort(arr,n);
       
    printf("Sorted array is \n");
    
    printArray(arr,n);
      
     return 0;
   }