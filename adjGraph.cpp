#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class adjGraph
{
private:
    vector <char > vertices;
    vector<pair<char, char > edges;
public:
    adjGraph(/* args */);
    ~adjGraph();
    insertVectices(char vert);
    is_exist(char vect);
};

adjGraph::is_exist(char vect){
  auto it= find(vertices.begin(),vertices.end(),vect); // it's retun a index no, if vectore is exist in spacific location.
    if(it != vertices.end())
        return true;
    return false;

}
adjGraph::insertVectices(char vert){
    if(is_exist(char vert))
        
}

// adjGraph::adjGraph(/* args */)
// {
// }

// adjGraph::~adjGraph()
// {
// }

int createNode()

    int main()
{

    return 0;
}