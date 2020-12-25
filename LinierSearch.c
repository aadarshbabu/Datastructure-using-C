#include<stdio.h>
int linearsearch(int array[],int value, int length)
{
    int i;
    for(i=0;i<length;i++)
    {
        if(array[i]==value)
        {
        return i;
        }    
    }  
         return -1; 
}
int main(){
    int length=11;
    int find=65;
    int array[]={11,2,32,43,4,233,23,2,432,53,55};
    if(linearsearch(array,find,length)>-1)
      printf("value founded %d index",linearsearch(array,find,length));
     else{
         printf("value not founded");
     } 
}