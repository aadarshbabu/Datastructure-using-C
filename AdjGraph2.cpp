#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int N = 10e4;
vector<int> graph[N];

void createGraph(int edges)
{

    for (int i = 0; i < edges; i++)
    {
        int v1, v2;
        cout << "From Vect To Vec2 ";
        cin >> v1 >> v2;

        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
}

void printGraph(int ver)
{

    for (size_t i = 0; i <= ver; i++)
    {
        cout << i << " ";
        for (auto conn : graph[i])
        {
            cout << conn << " ";
        }

        cout << endl;
    }
}

int main()
{
    int vertex, edges;
    cout << "Enter a Graph {Vertix} and {Edges}";
    cin >> vertex >> edges;
    createGraph(edges);
    printGraph(vertex);
    return 0;
}