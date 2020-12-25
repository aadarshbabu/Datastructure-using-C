#include<stdio.h>
#include"intLength.c"
void bubble_short(int arr[], int length)
{
    
        int round=0,j=0;
        int flag=0;
        int temp;
        // int round 
        for ( round = 0; round < length; round++)
        {
           for ( j = 0; j < length-round; j++)
           {
               if(arr[j]>arr[j+1])
               {
                   flag++;
                  temp=arr[j];
                  arr[j]= arr[j+1];
                  arr[j+1]=temp;
               }
           }
            if(flag==0)
            {
                break;
            }
        }
    
    for ( round = 0; round <= length; round++)
    {
        printf("%d, ",arr[round]);
    }
    

}
int main(){

           int  array[]= {11,2,3,12,4,55,333,4343,33,'\0'};
              int  len=intLength(array);
                
            bubble_short(array,len);




}
