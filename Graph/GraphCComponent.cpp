#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int N = 10e5;
vector<int> Vertices[N];
bool varray[N];

void DFS(int vertix)
{
    //when vectex is visited then only return the call.
    if (varray[vertix] == true)
    {
        return;
    }
    // if vertex is not visited then mark and visit.
    varray[vertix] = 1;
    // traverce the each of vector. and call DfS Recursive.
    for (auto vertex : Vertices[vertix])
    {
        DFS(vertex);
    }
}

int main()
{
    int count = 0;
    int vertex, edges;
    cin >> vertex >> edges;
    for (size_t i = 0; i < edges; i++)
    {
        int to, from;
        cin >> to >> from;
        Vertices[to].push_back(from);
        Vertices[from].push_back(to);
    }

    // Call the DFS of each vertex.
    for (size_t i = 0; i < vertex; i++)
    {
        //When the vetex is already visited The continue the loop and dont call the DFS.
        if (varray[i] == true)
            continue;

        DFS(i);
        count++;
    }
    cout << "Connected component is " << count;

    return 0;
}