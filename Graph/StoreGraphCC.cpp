#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int N = 10e5;
vector<int> Vertices[N];
bool varray[N];
// Store the connected component.
vector<vector<int>> cc;
// Temp Store Connected comp.
vector<int> tempcc;
int DFS(int vertix)
{
    //when vectex is visited then only return the call.
    if (varray[vertix] == true)
    {
        return false;
    }
    // if vertex is not visited then mark and visit.
    varray[vertix] = 1;
    // Store the vertix in temp compnent.
    tempcc.push_back(vertix);

    // traverce the each of vector. and call DfS Recursive.
    for (auto vertex : Vertices[vertix])
    {
        DFS(vertex);
    }
    return true;
}

int main()
{
    int vertex, edges;
    cin >> vertex >> edges;
    for (size_t i = 0; i < edges; i++)
    {
        //take the input..
        int to, from;
        cin >> to >> from;
        Vertices[to].push_back(from);
        Vertices[from].push_back(to);
    }

    // Call the DFS of each vertex.
    for (size_t i = 1; i <= vertex; i++)
    {
        //When the vetex is already visited The continue the loop and dont call the DFS.
        if (varray[i] == true)
            continue;
        tempcc.clear();
        DFS(i);
        cc.push_back(tempcc);
    }
    cout << "Connected component is " << cc.size() << endl;

    //print the vector of vector.
    for (size_t i = 0; i <= cc.size(); i++)
    {
        for (auto ccval : cc[i])
        {
            cout << ccval << " ";
        }
        cout << endl;
    }

    return 0;
}