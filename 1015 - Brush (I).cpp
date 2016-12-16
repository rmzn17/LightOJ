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

using namespace std;


int main()
{
    int n,tc,cs=1,x;
    cin>>tc;
    while(tc--)
    {
        int sum=0;
        cin>>n;
        while(n--)
        {
            cin>>x;
            if(x<0)
                continue;
            sum=sum+x;
        }
        printf("Case %d: %d\n",cs++,sum);
    }
    return 0;
}
