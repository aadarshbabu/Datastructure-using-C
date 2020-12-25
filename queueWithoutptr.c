#include<stdio.h>
int size=5;
int queue[5];
int front=-1;
int rear=-1;

int insertQueue()
    {
        int data;

        if(rear==size-1 && front==0 )
        {
            printf("queue overflow");
            return 0;
        }
        else if( rear+1==front)
        {
            printf("queue overflow");
            return 0;
        }

        printf("Enter a value");
        fflush(stdin);
        scanf("%d",&data);
        

        if(front==-1&&rear==-1)
        {
            front++; rear++;
            queue[rear]=data;
            return 0;
        }

        // else if(rear<front)
        // {
        //    rear++;
        //    queue[rear]=data;
        //    return 0;
        // }
        if(front>0 && rear==size-1)
         
          {
                rear=0; 
                queue[rear]=data;
                return 0;
          }
        else if(rear<=size-1 && front!=rear)
        {
            rear++;
            queue[rear]=data;
            return 0;
        }
         else
          {
              rear++;
              queue[rear]=data;
          }
        
        




    }

    int view()
    {
        int i;

        if(rear==-1)
        {
            printf("Queue is empty");
        }
        else
        {
           int i=front;
             while(i!=rear)
                {
                    if(i==size-1)
                      { 
                         printf("%d, ",queue[i]);
                          i=0; 
                       }
                     printf("%d, ",queue[i]);
                    i++;
                }
              printf("%d, ",queue[i]);
        }
        
        return 0;
    }




   int deleteQueue()
    {
        int data;
        if(front==-1)
        {
            printf("Queue is underflow");
            return 0;
        }
        else if(front==size-1 && rear>=0)
        {
            front=0;
        }
        else if(front<=rear)
        {
            data=queue[front];
            front++;
            printf("%d",data);
            return data;
        }
        


    }

int main()
{  


    int choice=0;
  while(choice<3)  
  { 
    printf("Press 1 To insertQueue \nPress 2 to deleteQueue \n");
    printf( "Press 3 To Display Queue \nPress 4 to Exit\n");

    printf("Enter a choice");
    fflush(stdin);
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
       insertQueue();
        break;
    case 2:
      deleteQueue();  
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