#include<stdio.h>

 const int N=20;
  int array[20];
 int hash(int data)
{
    int index;
    index=(data*9*21/12)%10;
    return index;

}

setvalue(int value)
{
 
   int position;
    position=hash(value);
    int pass=0;
    while(array[position]>0)
    {
           if(position<(N-1))
                 position++;
            else{
                position=0;
                pass++;
                if(pass==2)
                {
                    printf("Space is full");
                    break;
                }
            }     
    }
     array[position]=value;
}

show_value()
{

    for (int i = 0; i < 20; i++)
    {
        printf(" index %d,  value  %d,  \n",i,array[i]);
    }
    
    // int position;
    // position=hash(data);
    // printf("%d",array[position]);
    // return 
}









int main(int argc, char const *argv[])
{
    setvalue(44);
    setvalue(55);
    setvalue(100);
    setvalue(143);
    setvalue(153); //this value is colide to each other
    setvalue(13);
    setvalue(33); //this value is  colide to each other
    setvalue(33); //this value is  colide to each other
    show_value();
   

    return 0;
}

