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
#define vc vector<int>
#define gcd(x,y)  __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define MIN(a, b) (a<b?a:b)
#define MAX(a, b) (a>b?a:b)
#define MAX 1000001
#define inf 999999999
#define PI acos(-1)
#define MOD 1000000007
#define pf printf
#define sc scanf
#define pb push_back
#define long li
#define long long lli
#define FOR(i,n) for(int i=0;i<a;i++)
using namespace std;


int main()
{

    int tc,cs=1,a,b,x;

    sc("%d",&tc);

    while(tc--)
    {
        int v[105];
        sc("%d%d",&a,&b);
        FOR(i,a)
        {
            sc("%d",&v[i]);

        }
        int x,y;
        for(int i=0; i<b; i++)
        {
            string ch;
            cin>>ch;
            if(ch[0]=='P')
            {
                sc("%d %d",&x,&y);
                swap(v[x],v[y]);
            }
            else if(ch[0]=='S')
            {
                sc("%d",&x);
                for(int j=0; j<a; j++)
                {
                    v[j]=v[j]+x;
                }
            }
            else if(ch[0]=='M')
            {
                sc("%d",&x);
                for(int j=0; j<a; j++)
                {
                    v[j]=v[j]*x;
                }
            }
            else if(ch[0]=='D')
            {
                sc("%d",&x);
                for(int j=0; j<a; j++)
                {
                    v[j]=v[j]/x;
                }
            }
            else
            {
                reverse(v,v+a);
            }
        }
        printf("Case %d:\n",cs++);
        for(int i=0; i<a-1; i++)
        {
            pf("%d ",v[i]);
        }

        pf("%d\n",v[a-1]);

    }
    return 0;
}



