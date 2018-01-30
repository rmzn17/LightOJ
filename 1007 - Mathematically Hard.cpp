#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define vi vector<int>
#define vii vector < pii >
#define si set<int>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fr first
#define se second
#define MOD 1000003
#define MAX 10100
#define MOD 1000003

int ans[5000005];
ull fin[5000005];

void precompu()
{
    for (int i=0;i<5000005;i++)
        ans[i]=i;
    for (int i=2;i<5000005;i++){
        if (ans[i]==i){
            ans[i]=i-1;
            for (int j=2;j*i<5000005;j++){
                ans[i*j] = (ans[i*j]/i)*(i-1);
            }
        }
    }
    fin[1]=0;
    for (int i=2;i<5000005;i++){
        ull kk = ans[i];
        fin[i]=fin[i-1]+kk*kk;
    }
}


int main ()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	#endif
	int t;
	scanf("%d",&t);
	int cas=1;
	precompu();
	while (t--){
		printf("Case %d: ",cas++);
        int a,b;
        scanf("%d %d",&a,&b);
        ull ans=fin[b] - fin[a-1];
        //cout<<fin[b]<<"  "<<fin[a-1];
        printf("%llu\n",ans);
	}
	return 0;
}

