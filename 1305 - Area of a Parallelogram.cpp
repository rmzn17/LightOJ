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
    int ax,ay,bx,by,cx,cy,dx,dy;

    while(tc--)
    {

        cin>>ax>>ay>>bx>>by>>cx>>cy;
//        long long int temp1=abs(ax-bx);
//        long long int temp2=abs(ay-by);
//        long long int temp3=abs(bx-cx);
//        long long int temp4=abs(by-cy);
//        long long int temp5=sqrt((temp1*temp1)+(temp2*temp2));
//        long long int temp6=sqrt((temp3*temp3)+(temp4*temp4));
//        long long int area=temp5*temp6;
        int dx=ax+cx-bx;
        int dy=ay+cy-by;
        long long int area1 = (ax*by)+(bx*cy)+(cx*dy)+(dx*ay);
        long long int area2 = (ay*bx)+(by*cx)+(cy*dx)+(dy*ax);

        long long int area = abs(area1 - area2);
        area = area / 2;




        printf("Case %d: %d %d %lld\n",cs++,dx,dy,area);


    }
    return 0;
}






