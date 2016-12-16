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
int dist[50000];
int value[50000];
int Fur_node;
int close_node;
int  BFS(int src)
{

    memset(dist,-1,sizeof(dist));
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
                    Fur_node=v;
                }
                line.push(v);
            }
        }
    }
}

int  fun(int src)
{

    memset(value,-1,sizeof(value));
    memset(visited,false,sizeof(visited));
    queue<int>line;
    line.push(src);
    value[src] = 0;
    int max_cost=0;
    while( !line.empty() )
    {
        int u = line.front();
        line.pop();
        visited[u]=true;
        int ucost = value[u];

        for(int i=0; i<edge[u].size(); i++)
        {
            int v = edge[u][i];
            if(visited[v]==false)
            {
                int vcost=cost[u][i];
                value[v]=ucost+vcost;
                if(value[v]>max_cost)
                {
                    max_cost=value[v];
                    close_node=v;
                }
                line.push(v);
            }
        }
    }
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

        }


        BFS(0);
//        for(int i=0; i<n; i++)
//            printf("node=%d cost=%d\n",i,dist[i]);
        //int last=0;
        //printf("Far src=%d\n",Fur_node);
        BFS(Fur_node);

        fun(Fur_node);


        //printf("Far src=%d\n",Fur_node);
        printf("Case %d:\n",cs);
        for(int i=0; i<n; i++)
        {
            printf("%d\n", max(dist[i],value[i]));
        }
        Fur_node=0;
        for(int i=0; i<n; i++)
        {
            edge[i].clear();
            cost[i].clear();
        }
    }
    return 0;
}

