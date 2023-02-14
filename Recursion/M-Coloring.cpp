#include <bits/stdc++.h> 
using namespace std;

bool possibleToColor(int node, bool graph[101][101], int color[], int col,int N)
{
    //iterate for all nodes
    for(int k=0; k<N;k++)
    {
        // if k is not eqaul to node itselft && to check if there is an edge present b/w node and k i.e to check adjacent node && 
        //to check if the desired 'col' is already taken in color array
       if(k != node && graph[k][node] == 1 && color[k] == col)
       {return false;}
    }   
    return true;
}
bool coloring(int node,bool graph[101][101], int m, int N, int color[])
{
    if(node == N)
    {return true;}

    for(int i=1; i<=m;i++)
    {
        //check if possible to color
        if(possibleToColor(node,graph,color,i,N))
        {
            //if true filling the node with that color in the color array
            color[node] = i;
            //move to next recursion
            if(coloring(node+1, graph, m,N, color))
            return true; // to break the loop
            else
            {//backtracking
            color[node] =0;}
        }
    }
    return false;
}
int main()
{
    int N = 4;
    int m = 3;
    bool graph[101][101] = {
        { 0, 1, 1, 1 },
        { 1, 0, 1, 0 },
        { 1, 1, 0, 1 },
        { 1, 0, 1, 0 },
    };
    cout<<"entering loop"<<endl;
    int color[N] = {0};
    if(coloring(0,graph,m,N,color))
    cout<<"1";
    else
    cout<<"0";
    return 0;
}
