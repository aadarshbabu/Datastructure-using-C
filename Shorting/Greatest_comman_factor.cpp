#include <iostream>
using namespace std;
int GCD(int, int);
int GCD(int num1, int num2)
{

    if (num1 == num2)
        return (num1);
    else if (num1 % num2 == 0)
    {
        return num2;
    }
    else if (num2 % num1 == 0)
    {
        return num1;
    }

    if (num1 > num2)
        GCD((num1 % num2), num2);
    else
    {
        return GCD(num1, (num2 % num1));
    }
}

int main()
{
    int result = GCD(120, 52);
    cout << result;
    return 0;
}