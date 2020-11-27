#include<iostream>
#include<stdio.h>
using namespace std;
class Tower_of_hanoi{

    private:


    public:
        void TOH(int n, char Beg, char Aux, char End)
        {
            if (n>=1)
            {
                TOH( n-1, Beg, End, Aux);
                    // printf(" %c to %c ", Beg,End);
                    cout<<Beg<<" "<<"To "<<End<<" ";
                TOH(n-1, Aux, Beg, End);//backtracking... this code...
            }
        }




};




using namespace std;

int main(){
    Tower_of_hanoi Hanoi;
    Hanoi.TOH(4,'a','b','c');
    return 0;
}
