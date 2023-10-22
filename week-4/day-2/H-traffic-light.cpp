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
ll t;
cin>>t;
while(t--){
ll n;
		char a;
		cin >> n >> a;
		string s;
		cin >> s;
	
		ll ans = 0;
		ll ct =0;
		bool ok = false;
		ll index;
		ll time =0;
		for(ll i=0;i<n;i++){
			if(ok){
				ct++;
			}
			if(s[i]==a){
				ok = true;
				
			}
			
			if(s[i]=='g'){
				ans = max(ans,ct);
				ct = 0;
				ok = false;
			}
			if(i==n-1 && time ==0){
				i=-1;
				time++;
			}
		}
		
		cout << ans << endl;
    
}
get_out;
}