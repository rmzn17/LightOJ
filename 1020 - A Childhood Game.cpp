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

int main ()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	#endif
	//ios_base::sync_with_stdio(false);
	int t;
	scanf("%d",&t);
	int cas=1;
	while (t--){
		cout<<"Case "<<cas++<<": ";
        ll n;
        scanf("%lld",&n);
        char s[10];
        scanf("%s",s);
        if (strcmp(s,"Alice")==0){
            if (n%3==1)
                cout<<"Bob"<<endl;
            else
                cout<<"Alice"<<endl;
        }
        else{
            if (n%3==0)
                cout<<"Alice"<<endl;
            else
                cout<<"Bob"<<endl;
        }
	}
	return 0;
}

