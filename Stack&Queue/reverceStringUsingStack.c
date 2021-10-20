#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char stack[30];
    int top=-1;

    char str[]="hello Aadarsh";

    int i=0;
    while (str[i]!='\0')
    {
        top++;
        stack[top]=str[i];
        i++;
    }

    while(top!=-1)
    {
        printf("%c \n",stack[top]);
        top--;
    }
    printf("\n");


// More simple technique . to reverce the string..
// both funcion is identicl..

    int len= strlen(str);
    top=(len-1);
    while (top>=0)
    {
        printf("%c \n",str[top]);
        top--;
    }
    

    return 0;
}
