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


    int a,mp,x;
    int tc,cs=1;
    cin>>tc;
    while(tc--)
    {
        cin>>mp>>x;
        int sum=0;
        if(x>=mp)
        {

            for(int lp=x; lp>=0; lp--)
            {
                if(lp==mp)
                {

                    sum=sum+11;
                }
                else if(lp==0)
                {

                    sum=sum+12;
                }
                else
                    sum+=4;

            }

        }
        else
        {
            for(int i=x; i<mp; i++)
            {
                sum=sum+4;
            }
            for(int lp=mp; lp>=0; lp--)
            {
                if(lp==mp)
                {

                    sum=sum+11;
                }
                else if(lp==0)
                {

                    sum=sum+12;
                }
                else
                    sum+=4;

            }
        }
        printf("Case %d: %d\n",cs++,sum);
    }
    return 0;
}

