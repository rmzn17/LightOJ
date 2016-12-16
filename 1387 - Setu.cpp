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

    long int n;
    int tc,cs=1;
    string setu;

    scanf("%d",&tc);

    while(tc--)
    {
        long int tot=0;
        cin>>n;
        int k;
        printf("Case %d:\n",cs++);
        for(int i=0; i<n; i++)
        {
            cin>>setu;
            if(setu=="donate")
            {
                cin>>k;
                tot+=k;

            }
            if(setu=="report")
                printf("%ld\n",tot);
        }


    }
    return 0;
}





