#include<stdio.h>
#include<string.h>
struct hashmap
{
    int index;
   char key[20];
    char data[20];
}h[20];

int hashfunction(char * key)
{
    int index;
    int dat;
   int j = strlen(key);
    for (int i = 0; i != j; i++)
    {
        dat+=key[i];
    }

    index= dat%10;
    return index;

}
//  void showData()
//  {
//      for (int i = 0; i < 20; i++)
//      {
//         printf(" index %d, %s, %s \n ",h[i].index, h[i].key, h[i].data );
//      }
     
//  }

int setdata(char *key)
{
    int position=hashfunction(key);
    printf("%d",position);
    int flag=0;
     while(h[position].index > 0 )
    {
        position++;
        if(position<19)
            {
                position+=1;
            }
            else{
                position=0;
                    flag++;
                    if(flag==2)
                        break;
            }
    }
    h[position].index +=1;
    strcpy(h[position].key,key);
      printf("Enter the value to store");
         scanf("%s",h[position].data);
 return 1;
}

void searchvaue(char * key)
{
    int position =hashfunction(key);
    printf("%s",h[position].data); 
}


int main(int argc, char const *argv[])
{

char array[20];
printf("Enter a key");
scanf("%s",array);
fflush(stdin);
setdata(array);

printf("Enter a key");
scanf("%s",array);
fflush(stdin);
setdata(array);

printf("Enter a key");
scanf("%s",array);
fflush(stdin);
setdata(array);

// showData();
printf("Enter a key for search");
scanf("%s",array);
fflush(stdin);
searchvaue(array);

return 0;
}
