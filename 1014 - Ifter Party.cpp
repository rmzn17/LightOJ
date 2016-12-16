#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
#define MAX 1000005
#define pf printf
#define sf scanf
typedef long long ll;
ll a[MAX];

int main()
{
    ll p, l, sub;
    int test, t;
    sf("%d", &test);
    for(t=1; t<=test; t++)
    {
        sf("%lld%lld", &p, &l);
        sub = (p-l);
         pf("Case %d:", t);
        if(sub<=l)
        {
            pf(" impossible\n");
        }
        else
        {
            int k=1;
            int count = 0;
            int temp = sqrt(sub);
            for(int i=1; i<=temp; i++)
            {
                if(sub%i==0)
                {
                    ll div = (sub/i);
                    if(div>l)
                    {
                        a[k] = div;
                        k++;
                        count++;
                    }
                    if(i>l && div!=i )
                    {
                        a[k] = i;
                        k++;
                        count++;
                    }
                }
            }
            sort(a, a+k);
            for(int j=1; j<=count; j++)
            {
                pf(" %lld", a[j]);
            }
            pf("\n");
        }
    }
}
