#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

vector<int>edge[50000];
vector<int>cost[50000];
bool visited[50000];
set<int>node;
int Search_For_Farthest_Node(int src)
{

    int dist[50000];
    memset(dist,2000000001,sizeof(dist));
    memset(visited,false,sizeof(visited));
    queue<int>line;
    line.push(src);
    dist[src] = 0;
    int dest;
    int max_cost=0;
    while( !line.empty() )
    {
        int u = line.front();
        line.pop();
        visited[u]=true;
        int ucost = dist[ u ];

        for(int i=0; i<edge[u].size(); i++)
        {
            int v = edge[u][i];
            if(visited[v]==false)
            {
                int vcost=cost[u][i];
                dist[v]=ucost+vcost;
                if(dist[v]>max_cost)
                {
                    max_cost=dist[v];
                    dest=v;
                }
                line.push(v);
            }
        }
    }

    return dest;
}

int  BFS(int src)
{

    int dist[50000];
    memset(dist,2000000001,sizeof(dist));
    memset(visited,false,sizeof(visited));
    queue<int>line;
    line.push(src);
    dist[src] = 0;
    int max_cost=0;
    while( !line.empty() )
    {
        int u = line.front();
        line.pop();
        visited[u]=true;
        int ucost = dist[ u ];

        for(int i=0; i<edge[u].size(); i++)
        {
            int v = edge[u][i];
            if(visited[v]==false)
            {
                int vcost=cost[u][i];
                dist[v]=ucost+vcost;
                if(dist[v]>max_cost)
                {
                    max_cost=dist[v];

                }
                line.push(v);
            }
        }
    }
    return max_cost;
}

int main()
{
    int test_case,n,u,v,w;
    scanf("%d",&test_case);
    for(int cs=1; cs<=test_case; cs++)
    {
        scanf("%d",&n);
        for(int i=0; i<n-1; i++)
        {
            scanf("%d%d%d",&u,&v,&w);
            edge[u].push_back(v);
            edge[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
           // node.insert(u);
            //node.insert(v);

        }
        int src=Search_For_Farthest_Node(0);
        int ans=BFS(src);
        printf("Case %d: %d\n",cs,ans);
        for(int i=0; i<n; i++)
        {
            edge[i].clear();
            cost[i].clear();
        }
    }
    return 0;
}
