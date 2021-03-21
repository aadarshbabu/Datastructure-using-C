
#include<stdio.h>

void swap( int* s, int* e)
{
    // printf("%d",*(&s));
    int temp;
    temp=*s;
    *s=*e;
    *e=temp;
}

int main(){
    int arr[]={11,2,3,4,2};
    int i;
    swap(&arr[3], &arr[1]);
    // array ka name bhar likha uske first block ka address hota hai.
    for ( i = 0; i < 5; i++)
    {
        printf("%d, ",arr[i]);
    }
    
}
