#include <iostream>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

#define V 5

int minIndex(int key[], bool MST[])
{
    int min = INT_MAX;
    int min_index;
    for (int i = 0; i < V; i++)
    {
        if (MST[i] == false && key[i] < min)
        {
            min = key[i];
            min_index = i;
        }
    }
    return min_index;
}

void printMST(int parent[], int graph[V][V])
{
    cout << "Edge \tWeight\n";
    for (int i = 1; i < V; i++)
    {
        cout << parent[i] << " - " << i << " \t" << graph[i][parent[i]] << " \n";
    }
}

void primMST(int graph[V][V])
{
    int parent[V];
    int key[V];
    bool MST[V];

    for (int i = 0; i < V; i++)
    {
        key[i] = INT_MAX;
        MST[i] = false;
    }

    parent[0] = -1;
    key[0] = 0;

    for (int count = 0; count < V - 1; count++)
    {
        int u = minIndex(key, MST);
        MST[u] = true;
        for (int i = 0; i < V; i++)
        {
            if (graph[u][i] && MST[i] == false && graph[u][i] < key[i])
            {
                parent[i] = u;
                key[i] = graph[u][i];
            }
        }
    }
    printMST(parent, graph);
}

int main()
{
    int graph[V][V] = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 3},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}};

    primMST(graph);
}