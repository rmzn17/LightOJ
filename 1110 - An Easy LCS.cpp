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
#include<sstream>
#define vc vector<int>
#define gcd(x,y)  __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define MIN(a, b) (a<b?a:b)
#define MAX(a, b) (a>b?a:b)
#define max 1000001
#define inf 999999999
#define PI acos(-1)
#define MOD 1000000007

using namespace std;

int dp[1000][1000];
int l1;
int l2;
string s1,s2;
string ans[105][105];

int LCS()
{
    for(int i=0; i<l1; i++)
    {
        dp[i][0]=0;
        ans[i][0]="";
    }
    for(int i=0; i<l2; i++)
    {
        dp[0][i]=0;
        ans[0][i]="";
    }

    for(int i=1; i<=l1; i++)
    {
        for(int j=1; j<=l2; j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
                ans[i][j]=ans[i-1][j-1]+s1[i-1];
            }

            else if(dp[i][j-1]>dp[i-1][j])
            {
                dp[i][j]=dp[i][j-1];
                ans[i][j]=ans[i][j-1];
            }
            else if(dp[i][j-1]<dp[i-1][j])
            {
                dp[i][j]=dp[i-1][j];
                ans[i][j]=ans[i-1][j];
            }
            else
            {
                dp[i][j]=dp[i-1][j];
                ans[i][j]=min(ans[i-1][j],ans[i][j-1]);
            }
        }
    }

    return dp[l1][l2];

}

int main()
{
    int tc,cs=1;
    cin>>tc;
    while(tc--)
    {
        cin>>s1;
        cin>>s2;
        l1=s1.size();
        l2=s2.size();
        LCS();
        if(dp[l1][l2]==0)
            printf("Case %d: :(\n",cs++);
        else
        {
            printf("Case %d: ",cs++);
            cout<<ans[l1][l2]<<endl;
        }

    }
    return 0;
}



