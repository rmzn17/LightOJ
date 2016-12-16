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

int binary(int n)
{
    int remainder;
    long binary = 0, i = 1;

    while(n != 0)
    {
        remainder = n%2;
        n = n/2;
        binary= binary + (remainder*i);
        i = i*10;

    }
    return binary;
}

int main()
{

    long int n,p;
    int tc,cs=1;
    scanf("%d",&tc);
    getchar();
    char dec[100];
    char bi[100];
    char ch1,ch2,ch3;
    int a1,a2,a3,a4;
    int b1,b2,b3,b4;
    while(tc--)
    {
        gets(dec);
        gets(bi);
        sscanf(dec,"%d%c%d%c%d%c%d",&a1,&ch1,&a2,&ch2,&a3,&ch3,&a4);
        sscanf(bi,"%d%c%d%c%d%c%d",&b1,&ch1,&b2,&ch2,&b3,&ch3,&b4);

        int r1=binary(a1);
        int r2=binary(a2);
        int r3=binary(a3);
        int r4=binary(a4);
        int flag=0;
        if(r1==b1)
        {
            if(r2==b2)
                if(r3==b3)
                    if(r4==b4)
                    {
                        flag=1;

                    }
        }
        if(flag==1)
            printf("Case %d: Yes\n",cs++);
        else
            printf("Case %d: No\n",cs++);



    }
    return 0;
}




