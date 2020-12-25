#include"intLength.c"
#include<stdio.h>
  int  find_Min(int arr[], int len, int round )
  {
      int index=round,i;
      int min_value=arr[round];

      for (i = round+1; i < len; i++)
      {
            if( min_value > arr[i])
            {
                min_value=arr[i];
                index=i;
            }

      }
      return index;


  }

void selection_short(int arr[], int len)
{
    int index;
    int temp=0,i;

    for ( i = 0; i < len; i++)
    {
        index = find_Min(arr,len,i);
        temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
        //  printf("%d,",index);
    }
    for ( i = 0; i < len; i++)
    {
        printf("%d,",arr[i]);
    }
    


}

int main()
{
    int value;
    int array[]={12,2,3,1,6};
    // int array1[]={3,22,12,32,11,8};

      selection_short(array,5);
//    value= find_Min(array,6,0);
//    printf("%d",value);
//    value= find_Min(array1,6,1);
//    printf("%d",value);





}