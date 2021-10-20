#include<malloc.h>
#include<stdio.h>
#include<string.h>
// stack in class stuctor
struct stackA
{   
        int top;
        int asize;
        int *arr;

};
// this input function Return Address of Stack Structor and take value 
struct stackA * input(int r)
{
    struct stackA *st;// it is a pointer variable contain address of stack variable
    st=malloc(sizeof(struct stackA));// malloc function return the Address of Stack Variable
    st->top=-1;/// default value assinged
    st->asize=r;// size assine The asize to passed the value in input function..
    st->arr=malloc(sizeof(int)*(r));// this function make Array return array Address 
    return st;// return address of stack;
}
int isfull(struct stackA *st)
{
    if(st->top==st->asize-1)// cheak the condation array top and array size -1 
    return 1; // This indiate true stack is full
    else
    {
        return 0;// otherwise stack is not full
    }
    
}
int isempty(struct stackA *st)
{
    if(st->top==-1)// cheak stack is impty
    return 1;//if stack is empty return true.
    else
    {
        return 0;// otherwise return false.
    }
    
}
void push(struct stackA *st,int value)
{
    if(isfull(st)){// invoke the full function pass the pointer address.
    // if is full return true that is stact is full by value. print the massage sack is overflow
    // return the controle..
        printf("Stack overflow\n");
        return ;
    }
    else
    {
        // otherwise top increse and array top element in asssinged value..
        st->top++;
        st->arr[st->top]=value;
    }
}
// this is pop function to to pop the value in stack.
void pop(struct stackA *st)
    {

        if(isempty(st))
        {
            printf("Stack is Empty\n");
            return ;
        }
        else
        {
            int res;
            int afterres;
           res= st->arr[st->top];
            printf("Your value is pop %d\n",res);
            afterres=st->arr[st->top]=0;
            // printf("After pop the value %d\n",afterres);
            st->top--;
            
        }
        
    }

    int main()
    {
        
        int x;
        struct stackA *p; // poninter varible contain return address the input function..
        printf("Enter a Position of Stack");
       scanf("%d",&x);
        p=input(x);// input function return the pointer address 
        for(int i=1;i<=x;i++)
            push(p,99*i);

        for(int i=0;i<x;i++)    
            pop(p);

    }