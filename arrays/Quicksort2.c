#include<stdio.h>

void swap(int *xp,int *yp)
{
    int temp=*xp;
        *xp=*yp;
        *yp=temp;

}

int partition(int arr[],int low,int high)
{
    int i=low;
    int j=high;
    int pivot=arr[i];
    while(i<j)
    {

    while(pivot>arr[i])
    {
        i++;
    while(pivot <arr[j])
    {
        j--;
    }
     
     if(i<j)

    swap(&arr[i],&arr[j]);
    }

    swap (&arr[low],&arr[j])
      return j;
}

void quicksort (int arr[],int low,int high)
{
    if(low<high)
    {
        int loc=partition(arr,low,high);
        quicksort (arr,low,loc-1)
        quicksort (arr,loc+1,high)
    }
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i])
        printf("\n");
    }
}

int main()
{
    int arr[]={7,1,3,6,9,2,7}

    int n= sizeof (arr)/sizeof (arr[0]);

    printf("Sorted array is ")
     quicksort(arr,0,n-1);
     printArray(arr,n);
}