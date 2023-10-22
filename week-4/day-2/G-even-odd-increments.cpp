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
ll n,m;
		cin>>n>>m;
		ll a[n];
		
		ll s=0,  e=0, o=0;
		for(ll i=0;i<n;i++){
			cin >> a[i];
			
			s+=a[i];
			if(a[i]%2==0)
			e++;
			else 
			o++;
		}
		
		
		while(m--) {
			ll x,y;
			cin >>x>>y;
			if(x==0){
				
				if(y%2!=0){
					cout<< s+(e*y)<< endl;
					o= o+e;
					s= s+(e*y);
					e= 0;	
				}
				else{
					cout << s+(e)*y << endl;
				    s= s+(e*y);
				}
			
			}
			else {
				
				if(y%2!=0){
					cout << s+(o*y) << endl;
					e=e+o;
					s= s+(o*y) ;
					o= 0;
				}
				else{
						
				cout << s+(o*y) << endl;
				s= s+(o)*y;
				}
			}
		
		}	 
    
}
get_out;
}