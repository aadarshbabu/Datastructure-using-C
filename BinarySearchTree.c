
#include<stdio.h>
#include<malloc.h>
struct node 
{ 
    int data;
    struct node* right;
    struct node* left;
    

};
struct node* root=NULL; // Root is globle pointer;

struct node* createNode(int data)
{
    //   printf("create node funciton call");
    struct node* ptr=(struct node*) malloc(sizeof(struct node));
        ptr->data=data;
        ptr->left=NULL;
        ptr->right=NULL;

        return (ptr);
}



int insertNode(struct node* NN)
{
    //   printf("insert node funciton call");
    struct node* PTR;
        if(root==NULL)
        {
            root=NN;
            return 1;
        }
        else{

            PTR=root;
            while (1)
            {
                if(PTR->data > NN->data)
                {
                    if(PTR->left==NULL){
                        PTR->left=NN;
                        return 1;
                     } 
                    PTR=PTR->left;
                }
             
                  
                if(PTR->data < NN->data){
                    if(PTR->right==NULL){
                         PTR->right=NN;
                         return 1;
                     }
                     PTR=PTR->right;
                }        
               
                

            }

     
        }
        return 0;
}

int  inorder(struct node* Root)
{   
    if(!Root)
    {
       return 1;
    }
     inorder(Root->left);
     printf("\n%d,",Root->data);
     inorder(Root->right);

}

int  preorder(struct node* Root)
{

    if(!Root)
    {
        return 1;
    }
        printf("%d,",Root->data);
        preorder(Root->left);
        preorder(Root->right);
}

 int postorder( struct node* Root )
{
  
    if(!Root)
    {
        return 1;
    }
        postorder(Root->left);
        postorder(Root->right);
        printf(" \n%d ", Root->data);
    
}


int main()
{
 struct node* NN;
 int i=1;
int check;
    while(i<=4)
    {
        NN=createNode(i*2);
      if(insertNode(NN))
            printf("Node inserted");
        i++;
    }
        preorder(root);
        printf("preorder complite\n");
        postorder(root);
        printf("\npostoder complite");
        inorder(root);
      
return 0;
}


