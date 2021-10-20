
#include<stdio.h>
void insertion_short(int arr[],int n)// this is a mysirg progrma it's easy to emplement the value..
{
        int i=1,temp,j,p=0;
      while(i<=n)
      {
            temp=arr[i]; // temp is contian a paviot element..
        for(j=i-1;j>=0&&arr[j]>=temp;j-- )// this condation become ture when j more then 0 and arr of j is greater then temp of paviot.
        {
            arr[j+1]=arr[j];// value is enterchange more value is change the position..
            arr[j]=temp;//
        }  

            i++;

      }

    while(p<n) // print the value of array...
    {
        printf("%d,",arr[p]);
        p++;
    }
     printf("\n ");

}
void insertionShort(int arr[],int n) // This program is desine by College algo..
    {
        int i=1,j, temp, p=0;
        while(i<n){ // this progrma etrate over the list..
            temp=arr[i]; // piviot the element it arr of 1 index value contain.

                for(j=i-1; j>=0&& temp<=arr[j];j--) //this condition true become j is not equal o and temp or piviot is less then arr of i-1 index..
                {
                    arr[j+1]=arr[j];// this statement change the gretest value to next location in array..
                }
                  arr[j+1]=temp;// this line of code shift the lowest value right position..
                 i++;

        }

        while(p<n) // print the value of array..
        {
        printf("%d,",arr[p]);
        p++;
        }

    }


int main(){
    int arr[]={5,4,3,2,8,9};// main function array..
    insertion_short(arr,6);
    insertionShort(arr,6);// call the function ...
}



