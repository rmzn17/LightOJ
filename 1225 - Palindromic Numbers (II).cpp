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
    int tc,cs=1;
    scanf("%d",&tc);
    getchar();
    while(tc--)
    {
        char s1[50];
        //s2=s1;
        // reverse(s1.begin(),s1.end());
        //int sz=s1.size();
        gets(s1);
        int sz=strlen(s1);
        int mid=sz/2;
        int j=sz-1;
        bool ok=true;
        for(int i=0; i<mid; i++)
        {
            if(s1[i]!=s1[j])
            {
                ok=false;
                break;
            }
            else
                j--;
        }
        if(ok)
            printf("Case %d: Yes\n",cs++);
        else
            printf("Case %d: No\n",cs++);
    }
    return 0;
}

