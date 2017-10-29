#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define vi vector<int>
#define vii vector < pii >
#define si set<int>
#define ll long long int
#define pb push_back
#define mp make_pair
#define fr first
#define se second
#define MOD 1000003
#define MAX 10100

int dp[110][110];
ll y[110];
ll w,n;

int func(int pos,int kr)
{
    if (kr == 0){
        return 0;
    }
    else if (pos == n){
        return 0;
    }
    if (dp[pos][kr] != -1)
        return dp[pos][kr];
    int up = upper_bound(y,y+n,y[pos]+w)-y;
    int ret = up-pos;
    dp[pos][kr] = max(ret + func(up,kr-1) , func(pos+1,kr));
    //cout<<pos<<"  "<<kr<<"  "<<dp[pos][kr]<<endl;
    return dp[pos][kr];
}

int main ()
{
    //cout << setprecision(7) << fixed;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	#endif
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	int cas=1;
	while (t--){
        memset(dp,-1,sizeof(dp));
		cout<<"Case "<<cas++<<": ";
        int k;
        cin>>n>>w>>k;
        int foo;
        for (int i=0;i<n;i++){
            cin>>foo>>y[i];
        }
        sort(y,y+n);
        cout<<func(0,k)<<endl;
	}
	return 0;
}

