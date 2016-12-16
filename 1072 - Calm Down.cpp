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
#include<iomanip>
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
    cin>>tc;
    while(tc--)
    {
        double R,r,temp,n;
        cin>>R>>n;
        r=(sin(PI/n)*R)/(1+sin(PI/n));
        cout << setprecision(10) << "Case " << cs++ << ": " << r <<endl ;
    }
    return 0;
}


