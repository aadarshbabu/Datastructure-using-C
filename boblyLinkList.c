#include<stdio.h>
#include<malloc.h>


struct node
{
    int data;
    struct node *next, *prv;
};

 struct node* createNode()
 {
    struct node * temp;
    temp=malloc(sizeof(struct node));
    return(temp);

 }

 struct node *start=NULL;

void insertNode(){
    struct node * temp;
    temp=createNode();
    printf("Enter a value");
    scanf("%d",&temp->data);
    temp->next=NULL;
    temp->prv=NULL;

    if(start==NULL)
        start=temp;

    else
    {
        start->prv=temp;
        temp->next=start;
        start=temp;
        
    }
        
}

deleteFirstNode(){
 struct node * temp;
 if(start==NULL)
 {
     printf("node is empty");
 }
 else
 { 
    temp=start;
    start=start->next;
    start->prv=NULL;
    free(temp);   
 }


}

void view(){
    struct node *temp;
    if(start==NULL)
    printf("LIst is empty");
    else
    {
        temp=start;
        while (temp->next!=NULL)
        {
            printf("%d \n",temp->data);
            temp=temp->next;
        }
         printf("%d \n",temp->data);
        
    }
    
    
}

int main(){
     insertNode();
     insertNode();
     insertNode();
     insertNode();
     view();
     deleteFirstNode();
     view();
    
}

