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

vector<int>edge[100];
vector<int>cost[100];
bool visited[100][100];
int distance[1000];
char graph[100][100];
int prince_position_X[]= {-1,0,0,1};
int prince_position_Y[]= {0,-1,1,0};
int land=0;
int row,col;


int DFS(int i,int j)
{
    land++;
    visited[i][j]=true;

    for(int d=0; d<4; d++)
    {
        int x=prince_position_X[d]+i;
        int y=prince_position_Y[d]+j;
        if(graph[x][y]=='.'&&visited[x][y]==false&&x>=0 && x<row && y>=0 && y<col)
        {
            DFS(x,y);
        }



    }
    return land;
}


int main()
{
    int test_case;
    scanf("%d",&test_case);
    getchar();
    for(int tc=1; tc<=test_case; tc++)
    {

        scanf("%d%d",&col,&row);
        getchar();
        for(int r=0; r<row; r++)
        {

            for(int c=0; c<col; c++)
            {
                scanf("%c",&graph[r][c]);
            }
            getchar();
        }
        memset(visited,false,sizeof(visited));
        bool flag=false;
        int ans=0;
        for(int r=0; r<row; r++)
        {
            for(int c=0; c<col; c++)
            {
                if(graph[r][c]=='@')
                {
                    ans=DFS(r,c);
                    flag=true;
                    break;

                }
            }
            if(flag)
                break;
        }

        printf("Case %d: %d\n",tc,ans);
        land=0;
    }
    return 0;
}
