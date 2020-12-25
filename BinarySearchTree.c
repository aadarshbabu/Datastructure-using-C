
#include<stdio.h>
#include<malloc.h>

struct node 
{
    struct node* right;
    struct node* left;
    int data;

};
struct node* root=NULL;
struct node* createNode(struct node* root, int data)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=data;
        ptr->left=NULL;
        ptr->right=NULL;
        return ptr;
}



void insertNode(struct node* NN)
{
    struct node* PTR;
        if(root==NULL)
        {
            root=NN;
        }
        else{
            PTR=root;
            while (PTR!=NULL)
            {
                if(PTR->data > NN->data)
                {
                    if(PTR->left==NULL){
                        PTR->left=NN;
                    } 
                }
                PTR=PTR->left;
                  
                if(PTR->data < NN->data){
                    if(PTR->right==NULL){
                         PTR->right=NN;
                    }

                }        
                PTR=PTR->right;
                

            }

        }
}
void  inorder(struct node* root)
{   
    if(root)
    {
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
    }
}
void  preorder(struct node* root)
{
    if(root)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

 void postorder( struct node* root )
{
  
    if(root){
    
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
    
}


int main()
{
 struct node * NN;
    insertNode(createNode(root,1));
    insertNode(createNode(root,2));
    insertNode(createNode(root,3));
    insertNode(createNode(root,4));
    insertNode(createNode(root,5));
    insertNode(createNode(root,6));
    insertNode(createNode(root,7));
    insertNode(createNode(root,8));
    insertNode(createNode(root,9));
     preorder(root);
      postorder(root);
      inorder(root);


}




