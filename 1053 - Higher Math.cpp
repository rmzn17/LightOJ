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
        for(int i=0; i<3; i++)
        {
            scanf("%d",&a);
            vc.push_back(a);
        }
        //sort(vc.begin(),vc.end());
        long long int x,y,z;
        x=vc[0];
        y=vc[1];
        z=vc[2];
        if((x*x)+(y*y)==(z*z)||(x*x)+(z*z)==(y*y)||(z*z)+(y*y)==(x*x))
            printf("Case %d: yes\n",cs++);
        else
            printf("Case %d: no\n",cs++);

    }
    return 0;
}
