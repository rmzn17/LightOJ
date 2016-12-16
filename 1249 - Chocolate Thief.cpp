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

    long int n,p,q,w,maxvol,minvol;
    int tc,cs=1;
    string s1,s2,thif,victim;;

    scanf("%d",&tc);

    while(tc--)
    {
        cin>>n;
        thif="";
        victim="";

        minvol=inf;
        maxvol=0;

        for(int i=0; i<n; i++)
        {
            cin>>s2>>p>>q>>w;
            int vol=p*q*w;

            if(maxvol<vol)
            {
                maxvol=vol;
                thif=s2;
            }

            if(minvol>vol)
            {
                victim=s2;
                minvol=vol;
            }

        }
        if(minvol==maxvol)
            printf("Case %d: no thief\n",cs++);
        else
            cout<<"Case "<<cs++<<": "<<thif<<" "<<"took chocolate from "<<victim<<endl;
    }
    return 0;
}




