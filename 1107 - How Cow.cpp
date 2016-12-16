#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <deque>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include<sstream>
//#define vc vector<int>
#define gcd(x,y)  __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define MIN(a, b) (a<b?a:b)
#define MAX(a, b) (a>b?a:b)
#define MAX 1000001
#define inf 999999999
#define PI acos(-1)
#define MOD 1000000007

using namespace std;

int main()
{

    vector<int>vc;
    int a;
    int tc,cs=1;
    cin>>tc;
    while(tc--)
    {
        vc.clear();
        for(int i=0; i<4; i++)
        {
            scanf("%d",&a);
            vc.push_back(a);
        }
        // sort(vc.begin(),vc.end());
        int n,x,y;
        cin>>n;
        printf("Case %d:\n",cs++);
        for(int i=0; i<n; i++)
        {
            cin>>x>>y;
            if(x>=vc[0]&&x<=vc[2]&&y>=vc[1]&&y<=vc[3])
                printf("Yes\n");
            else
                printf("No\n");

        }

    }
    return 0;
}

