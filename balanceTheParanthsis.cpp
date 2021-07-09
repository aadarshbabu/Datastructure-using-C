#include <iostream>
#include <bits/stdc++.h>
using namespace std;
unordered_map<char, int> symbol = {{'[', -1}, {'{', -2}, {'(', -3}, {']', 1}, {'}', 2}, {')', 3}};

int balanceParenthisi(string s)
{
    stack<char> b;
    for (char bracket : s)
    {
        if (symbol[bracket] < 0)
        {
            b.push(bracket);
        }
        else
        {
            if (b.empty())
                return 0;

            char top = b.top();
            b.pop();

            if (symbol[top] + symbol[bracket] != 0)
            {
                // symbol is not same..
                // because if symbol is same value shuld be equeal to zero...
                return 0;
            }
        }
    }

    if (b.empty())
        return 1;
}

int main()
{
    int testcase;
    cin>>testcase;

    while(testcase--)
    {

    string S;
    cin >> S;
   if( balanceParenthisi(S))
    {
        cout<<"Bracket is blance";
    }
    else {
        cout<<"bracket is Unbalnce..";
    }

    }
    return 0;
}