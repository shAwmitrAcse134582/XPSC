#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
int main()
{
fast;
    ll n,x= 0;
	cin >> n;
	ll c[n + 3] = {};
	for(ll i = 2;i<=n;i++) {
		if(c[i] == 2)
			x++;
		else if(c[i] == 0)
			for(ll j = i; j <= n; j += i)
				c[j]++;
	}
	cout << x;
get_out;
}