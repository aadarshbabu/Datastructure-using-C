#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct Queue
{
     int front;
     int rear;
     int *arr;
     int capcity;
    
};

struct Queue* createQueue(int cap)
{
    struct Queue *Q=malloc(sizeof(struct Queue));
    Q->front=-1;
    Q->rear=-1;
    Q->capcity=cap;
    Q->arr=malloc(sizeof(int)*cap);
     return(Q);
}

int isfull(struct Queue * Q)
{
  if((Q->rear+1)%(Q->capcity)==Q->front)
     return 1; 

     return 0;
}
int isempty(struct Queue* Q)
{
    if(Q->front==-1)
         return 1;

    return 0;
}

void insertQueue(struct Queue* Q,int value)
{
    if(isfull(Q))
    {
        printf("Queue is full\n");
    }
    else
    {
        Q->rear=(Q->rear+1)%Q->capcity;
        Q->arr[Q->rear]=value;
        if(Q->front==-1)
            Q->front=Q->rear;

        printf("Value is Insrted\n");   
    }

}

int deleteQueue(struct Queue *Q)
    {
        if(isempty(Q))
        {
            printf("Queue is Empty First Insert Value\n");
                return 0;

        }
        else
        {
                int data;
                data=Q->arr[Q->front];
                    
            
                  if(Q->front==Q->rear){
                       Q->front=Q->rear=-1;
                  }else
                  {
                    Q->front=(Q->front+1)%(Q->capcity);
                  }
                  
                    return(data);
                
         }
    } 
 void deleteQueueStructure(struct Queue *Q)
 {
    if(Q)
    {
        if(Q->arr)
        {
            free(Q->arr);
        }
         free(Q);
    }

      exit(0);

 }

 int menu()
 {
     int choice;
     printf("enter 1 to insert Queue\n" );
     printf("Enrter 2 to Remove Data in Queue\n");
     printf("Enter 3 to delete Queue\n");
     printf("\nEnter 4 To Exit\n");
     printf("Enter a choise\n");
     scanf("%d",&choice);
     return(choice);
    

 }


 int main()
 {
     int value;
    int deletedata=0;
    struct Queue * Q=createQueue(4);
     while (11)
     {
         switch (menu())
         {
         case 1:
         fflush(stdin);
         printf("Enter A value\n");
            scanf("%d",&value);
             insertQueue(Q,value);
             break;
        case 2:
           deletedata=deleteQueue(Q);
           printf("Value Remove %d\n",deletedata);
           break;
        case 3:
            deleteQueueStructure(Q);
            break;
        case 4:
            exit(0);
            break;
         
         default:
            printf("plese Enter a valid choise");
             break;
         }



        
     }
     
 }
