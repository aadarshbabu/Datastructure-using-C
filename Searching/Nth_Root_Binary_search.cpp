

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findNthRoot(int N)
{
    // If nth root is this no always lie in 1 to N
    double pre = 10e7;
    double low = 1, hii = N, mid;

    while ((low + hii) < pre)
    {
        mid = (low + hii) / 2;
        if(mid * mid == N)
            return mid;
        if(mid*mid >N)
            hii=mid;
        if(mid*mid <N )
            low = mid;
        
    }

}
int main()
{
    int root;
    cout<<"Enter a Number";
    cin>>root;
    int res = findNthRoot(root);
    cout<<res<<endl;
    return 0;
}