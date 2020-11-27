#include<iostream>
using namespace std;
int Fab(int);
class fanonchiseries
{
private:
    /* data */
public:
   int Fab(int n)
   {
       if(n==1||n==2)
       {
           return(1);

       }
       else
       {
           return(Fab(n-1)+Fab(n-2));
       }
       
       

   }
  
};

int main(){
   int result,i=1;
   fanonchiseries s1;
   while (i<=10)
   {
       /* code */
    result=s1.Fab(i);
    cout<<" "<<result;
    i++;
   }
   
   
    return 0;
}