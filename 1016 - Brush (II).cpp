#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define fr first
#define se second
#define MOD 1000000007
#define pl pair < int , vector < int > >


int main ()
{
	//freopen("input.txt","r",stdin);
	ios_base::sync_with_stdio(false);
    int t;
    int cas=1;
    cin>>t;
    while (t--){
        int n,w;
        cin>>n>>w;
        vi yy;
        for (int i=0;i<n;i++){
            int foo,y;
            cin>>foo>>y;
            yy.pb(y);
        }
        sort(yy.begin(),yy.end());
        ll ly=yy[0]+w;
        int co1=1;
        for (int i=1;i<yy.size();i++){
            if (yy[i] <= ly)
                continue;
            else{
                co1++;
                ly = yy[i]+w;
            }
        }
        ly=yy[yy.size()-1]-w;
        int co2=1;
        for (int i=yy.size()-2;i>=0;i--){
            if (yy[i] >= ly)
                continue;
            else{
                co2++;
                ly = yy[i] - w;
            }
        }
        cout<<"Case "<<cas++<<": "<<min(co1,co2)<<endl;
    }
	return 0;
}

