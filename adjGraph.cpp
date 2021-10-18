#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// adjesenc master
// Adjectent Graph function...
class adjGraph
{
private:
    vector<char> vertices;
    vector<pair<char, char>> edges;

public:
    adjGraph(/* args */);
    ~adjGraph();
    void insertVectices(char vert);
    int is_exist(char vect);
};

int adjGraph::is_exist(char vect)
{
    // it's retun a index no, if vectore is exist in spacific location.
    auto it = find(vertices.begin(), vertices.end(), vect);
    if (it != vertices.end())
        return true;
    return false;
}
void adjGraph::insertVectices(char vert)
{
    if (is_exist(vert))
    {
    }
}

// adjGraph::adjGraph(/* args */)
// {
// }

// adjGraph::~adjGraph()
// {
// }

int createNode() {}

int main()
{

    return 0;
}