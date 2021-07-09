#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<char> vertices;
vector<vector<int>> adj_mtrix;
int print(vector<vector<int>> v)
{
    for (auto &i : v)
    {
        for (auto &j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int func_adj_mtrix()
{
    for (int i = 0; i < vertices.size(); i++)
    {
        vector<int> temp;
        for (int j = 0; j < vertices.size(); j++)
        {
            temp.push_back(0);
        }
        adj_mtrix.push_back(temp);
    }
    // print(adj_mtrix);
}

int position(char p)
{
    auto it = find(vertices.begin(), vertices.end(), p);
    return (it - vertices.begin());
}

int is_exist(char vac)
{

    auto it = find(vertices.begin(), vertices.end(), vac);
    if (it != vertices.end())
        return true;
    return false;
}

int insert_vector(char vact)
{
    if (is_exist(vact))
    {
        cout << "vector find.." << endl;
        return false;
    }
    else
    {
        vertices.push_back(vact);
    }
     
}

int insert_edge(char vert1, char vert2)
{

    if (!is_exist(vert1))
    {
        cout << vert1 << "is not exitst";
        return false;
    }
    else if (!is_exist(vert2))
    {
        cout << vert2 << "is not exitst";
        return false;
    }
    else
    {
        int index1 = position(vert1);
        int index2 = position(vert2);
        adj_mtrix[index1][index2] = 1;
        adj_mtrix[index2][index1] = 1;
       
    }
    
}
int main()
{
    // NOTE
        // if 

    insert_vector('a');
    insert_vector('b');
    
    insert_vector('c');
        func_adj_mtrix();
    insert_edge('a', 'b');
    insert_edge('b', 'c');
    insert_edge('a', 'c');
     print(adj_mtrix);
    return 0;
}
