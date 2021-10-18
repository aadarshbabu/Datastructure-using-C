#include <malloc.h>
#include <iostream>
using namespace std;

class stack
{
private:
    int top;
    int array_size;
    int *Array;

    int stackFull()
    {
        if (top == array_size - 1)
        {
            return 1;
        }
        return 0;
    }
    int stackEmpty()
    {
        if (top == -1)
            return 1;
        return 0;
    }

public:
    stack() // You can't be write in Consructur in  Private
    {
        top=-1;
        array_size = 0;
    }
    void createStack(int NoOfElemnet)
    {

        top = -1;
        array_size = NoOfElemnet;
        Array = (int *)malloc(sizeof(int) * (NoOfElemnet));
    }
    void Push(int value)
    {
        if (stackFull())
        {
            cout << "Stack Overflow, Call Pop function";
           
        }
        else
        {
            top++;
            Array[top] = value;
        }
    }
    int Pop()
    {
        if (stackEmpty())
        {
            cout<<"Stack UnderFlow call Push function";

        }
        else
            {
                // cout << "value pop Success";
                int value = Array[top];
                top--;
                return value;
            }
    }
};


int main()
{
    stack ob;
    
     
    // ob.createStack(7);
    // ob.Push(44);
    // ob.Push(700);
    // ob.Push(700);
    // ob.Push(700);
    // ob.Push(700);
    // ob.Push(700);
    // ob.Push(700);
    // ob.Push(700);
    // cout<<ob.Pop()<<" ";
    // cout<<ob.Pop()<<" ";;
    // ob.Pop();
    // // cout<<value;
    
    return 0;
}