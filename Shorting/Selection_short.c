#include"intLength.c"
#include<stdio.h>
  int  find_Min(int arr[], int len, int round )
  {
      int index=round,i; // round contain initailly index 0. index 0 value is less then all the list value return index 0...
      int min_value=arr[round]; // arr round contain index 0 min value...

      for (i = round+1; i < len; i++) // i=round +1 because we know index 0 is already selected a min value... when second time find the min value. index 0 already shorted in the list. 
      {
            if( min_value > arr[i]) // min_value variable contain diffrent value in diffrent round or pass.
            {
                min_value=arr[i]; // change the min_value variable. we need lowest value in the list.. 
                index=i; //change the index 
            }

      }
      return index; // return the min value index..


  }

void selection_short(int arr[], int len)
{
    int index; // index contain min value of array..
    int temp=0,i;

    for ( i = 0; i < len; i++) 
    {
        index = find_Min(arr,len,i); // i contain round of array. 
        temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
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
     selection_short(array,5);





}