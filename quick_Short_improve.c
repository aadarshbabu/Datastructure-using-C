
#include<stdio.h>
int paration(int *arr, int start , int end)
{
       int temp,i,pivot,p_index;
       pivot=arr[end];
       p_index= start;
    for ( i = start; i < end; i++)
    {
        if (arr[i]<=pivot)
        {
             int temp;
                temp=arr[i];
                arr[i]=arr[p_index];
                arr[p_index]=temp;
            // swap(arr[i],arr[p_index]);
            p_index++;
        }
        
    }
    temp=arr[end];
    arr[end]=arr[p_index];
    arr[p_index]=temp;
    // swap(arr[end],arr[p_index]);
    return p_index;
    
}

void quickshort(int *arr,int start, int end)
{
    int index;
    if(start<end)
    {
    index=paration(arr,start,end);
    quickshort(arr,start,index-1);
    quickshort(arr,index+1,end);
    }
}

int main()
{
    int i=0;
   int arr[]={11,22,3,43,4,2,5,44,32};
   quickshort(arr,0,8);

    for (i = 0; i < 9; i++)
    {
        printf("%d, ",arr[i]);
    }
    return 0;
}



