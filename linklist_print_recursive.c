

#include<stdio.h>
#include<malloc.h>
 

struct node{
    int data;
    struct node * ptr;
};

struct node *start=NULL;

struct node* createNode(){
        struct node *nodeVariable;
  nodeVariable = malloc(sizeof(struct node));
  return(nodeVariable);

}

void insertNode(){
    struct node* temp, *temp2;
    temp=createNode();
    printf("Enter a Integer value");
    fflush(stdin);
    scanf("%d",&temp->data);
    temp->ptr=NULL;

    if(start==NULL){
        start=temp;
    }
    else{
       temp2=start; 
       while (temp2->ptr!=NULL)
       {
          temp2=temp2->ptr;
       }
       temp2->ptr=temp;
    }


}

int recurseve_print(struct node *start)
{
    if(start->ptr==NULL)
    {
    printf("%d,",start->data);
        return 1;
    }

    printf("%d,",start->data);
    recurseve_print(start->ptr);


}
int logicalReverce_print(struct node *st)
{
    if(st->ptr==NULL)
    {
        return 0;
    }
    recurseve_print(st->ptr);
    printf("%d,",st->data);


}



void deleteNode(){
    struct node *temp;
    
    if(start==NULL){
        printf("node is empty");

    }
    else{

        temp=start;
        start=start->ptr;
        free(temp);

    }



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

int menu()
{  
    int choice;
    printf("Press 1 to insert Node \n press 2 to Delete Node \n press 3 to View Node  \n press 4 to Exit the program \n 5 to Recrucive print \n 6. Logical reverse print\n  Enter Your choice  ");
         fflush(stdin);
        scanf("%d",&choice);
         return(choice);
}

int main(){
    system("cls");
    while(1)
    {
        switch (menu())
        {

            case 1:
            insertNode();
            break;
            case 2:
            deleteNode(); break;
            case 3:
            viewData();
                break;
            case 4:
            exit(0); 
            break;
            case 5:
            recurseve_print(start); break;
            case 6:
            logicalReverce_print(start); break;
            default:
            printf("Invalid Choice please Enter a valid choice");
            break;
        }

    }




}