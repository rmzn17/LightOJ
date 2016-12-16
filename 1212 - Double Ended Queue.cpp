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
using namespace std;

int main()
{
    int a,b;
    int tc,cs=1;
    sc("%d",&tc);
    while(tc--)
    {
        deque<int>q;
        sc("%d%d",&a,&b);
         printf("Case %d:\n",cs++);
        for(int i=0; i<b; i++)
        {
            int x;
            string st;
            cin>>st;
            if(st=="pushRight")
            {
                sc("%d",&x);
                if(q.size()!=a)
                {
                    q.push_back(x);
                    pf("Pushed in right: %d\n",x);
                }
                else
                    pf("The queue is full\n");

            }
            else if(st=="pushLeft")
            {
                sc("%d",&x);
                if(q.size()!=a)
                {
                    q.push_front(x);
                    pf("Pushed in left: %d\n",x);
                }
                else
                    pf("The queue is full\n");

            }
            else if(st=="popRight")
            {

                if(q.size()!=0)
                {
                    int temp=q.back();
                    pf("Popped from right: %d\n",temp);
                    q.pop_back();
                }
                else
                    pf("The queue is empty\n");

            }
            else if(st=="popLeft")
            {

                if(q.size()!=0)
                {
                    int temp=q.front();
                    pf("Popped from left: %d\n",temp);
                    q.pop_front();
                }
                else
                    pf("The queue is empty\n");

            }

        }
    }
    return 0;
}

