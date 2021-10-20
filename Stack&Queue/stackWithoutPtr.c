
#include<stdio.h>
int size=3;
int arr[3];
 int  top=-1;

int push(){
   
  int value;

 if(top==size-1)
   {
        printf("Stack is full\n");
         return 0;
    }
   printf("Enter a value ");
   fflush(stdin);
   scanf("%d",&value);
 
                    
     if(top==-1)
      {
          top++;
           arr[top]=value;
           return(1);
         }
         else
              {
                  top++;
                arr[top]=value;
                return(1);
             }




}


int pop()
{   
    int data;
    if(top==-1)
    {
        printf("Stack Underflow \n");
        return 0;
    }
    else
    {
        data=arr[top];
        top--;
        printf("%d, \n",data);
        return data;
    }



}

void view(){
     int i;
     if(top==-1)
     {
         printf("Stack is Underflow");
         return;
     }
     for(i=top; i>=0; i--)
     {
       printf("%d ", arr[i]);
     }

 }

int main()
{   

    int choice=0;
  while(choice<3)  
  { 
    printf("Press 1 To push \nPress 2 to Pop \n");
    printf( "Press 3 To Display \nPress 4 to Exit\n");
    printf("Enter a choice");
    fflush(stdin);
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
       push();
        break;
    case 2:
      pop();  
      break;
    case 3:
     view();
     break;
    case 4:
    printf(" Now You are exit ");
     default:
        printf("Invalid Choice");
    } 

  }

}