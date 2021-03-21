
#include<stdio.h>

 int Quick(int A[],int n, int BEG, int END, int *LOC)
{   int TEMP;
    int LEFT=BEG;
    int RIGHT=END;

 step2:
    while (A[*LOC]<=A[RIGHT] && *LOC != RIGHT)
    {
      RIGHT--;
    }
    if(A[*LOC]==A[RIGHT])
        return 0;

    if(A[*LOC]>A[RIGHT])
    {
        TEMP=A[*LOC];
        A[*LOC]=A[RIGHT];
        A[RIGHT]=TEMP;
        *LOC=RIGHT;
    }

    goto step3;

    step3:
    while( A[LEFT] <=A[*LOC] && LEFT != *LOC)
        LEFT--;

        if(*LOC==LEFT)
            return 0;
            
        if(A[LEFT]< A[*LOC]) 
        {
            TEMP=A[*LOC];
            A[*LOC]=A[LEFT];
            A[LEFT]=TEMP;
            *LOC=LEFT;
        }   


    goto step2;


}

void Quick_short(int A[], int n)
{
   int BEG,END,LOC=0,i;
   int UPPER[10];
   int LOWER[10];
   int TOP=-1;

   if(n>1)
   {
       TOP++;
       LOWER[TOP]=0;
       UPPER[TOP]=n-1;
   }
   while (TOP!=-1)
   {
      BEG=LOWER[TOP];
      END=UPPER[TOP];
      Quick(A,n,BEG,END,&LOC);
      TOP--;
      if(BEG<LOC-1)
      {
        TOP++;
        LOWER[TOP]=BEG;
        UPPER[TOP]=LOC-1;
      }

        if(LOC-1<END)
        {
            TOP++;
            LOWER[TOP]=LOC+1;
            UPPER[TOP]=END;
        }

   }
   
 

}

int main()
{
    int i;
    int arr[]={32,4,32,43,5,33,5,43,2,3,4};
    int n=10;
    Quick_short(arr,n);
    for(i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
    

}