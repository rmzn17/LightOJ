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
    char fname[101];
    char sname[101];
    char temp1[101];
    char temp2[101];


    while(tc--)
    {
        gets(fname);
        gets(sname);
        int len1=strlen(fname);
        int len2=strlen(sname);
        int x=0,y=0;
        for(int i=0; i<len1; i++)
        {
            if(fname[i]>='a'&&fname[i]<='z')
            {
                char c=toupper(fname[i]);
                temp1[x++]=c;
            }
            else if(fname[i]>='A'&&fname[i]<='Z')
            {
                temp1[x++]=fname[i];
            }


        }
        //puts(temp1);
        for(int i=0; i<len2; i++)
        {
            if(sname[i]>='a'&&sname[i]<='z')
            {
                char c=toupper(sname[i]);
                temp2[y++]=c;
            }
            else if(sname[i]>='A'&&sname[i]<='Z')
            {
                temp2[y++]=sname[i];
            }


        }
        temp1[x]='\0';
        temp2[y]='\0';
       // puts(temp1);
        //puts(temp2);

        int len3=strlen(temp1);
        int len4=strlen(temp2);
        if(len3!=len4)
        {
            printf("Case %d: No\n",cs++);
            continue;
        }

        sort(temp1,temp1+len3);
        sort(temp2,temp2+len4);
        //puts(temp1);
        //puts(temp2);
        bool ok=true;
        for(int i=0;i<len4;i++)
        {
            if(temp1[i]!=temp2[i])
            {
                ok=false;
                break;
            }
        }

        if(ok)
            printf("Case %d: Yes\n",cs++);
        else
            printf("Case %d: No\n",cs++);



    }
    return 0;
}





