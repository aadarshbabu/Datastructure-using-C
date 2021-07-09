#include<stdio.h>
#include<malloc.h>
#include<conio.h>
struct node{
    int data;
    struct node * ptr;
};

struct node *start=NULL;
struct node *TOP=NULL;

struct node* createNode(){
        struct node *nodeVariable;
  nodeVariable = malloc(sizeof(struct node));
  return(nodeVariable);

}                  

int top(){
    printf(" TOP VAlue %d \n",TOP->data);
    return TOP->data;
}



void push(){
    struct node* node;
    node=createNode();
    printf("Enter a Integer value");
    fflush(stdin);
    scanf("%d",&node->data);
    node->ptr=NULL;

    if(start==NULL){
        start=node;
        TOP=start;
    }
    else{

        TOP->ptr=node;
        TOP=TOP->ptr;
    }

}

int pop()
{
    void *ptr = (void *)-1;

        if(TOP==ptr)
        {
            printf("Link list is empty");
            return 0;

        }
    if(TOP==start )
    {
        
      
        free(TOP);
        start=NULL;
        TOP=-1;

        return 0;

    }

    struct node * cn;
    cn=start;
    while (cn->ptr != TOP)
    {
        cn= cn->ptr;
    }
    
    free(TOP);
    cn->ptr=NULL;
    TOP=cn;
    

}

void viewData(){
    struct node * view;
    if(start==NULL){
        printf("List is Empty");
    }
    else{
        view=start;
        while(view!=NULL)
        {
           printf("%d \n",view->data);
           view=view->ptr;
        }
        
    }
}


int main(int argc, char const *argv[])
{
  push();
  push();
  push();
  push();
  pop();
  pop();
  pop();
  pop();
  pop();

  top();
  top();
  viewData();
    return 0;

}