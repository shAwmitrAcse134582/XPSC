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
ll n;
cin>>n;
string a[n];

unordered_map<string,ll>mp;
for(ll i=0;i<n;i++){
    string s;
    cin>>s;
    a[i]=s;
    mp[a[i]]++;
}
string st=" ";
for(ll i=n-1;i>=0;i--){
    if(mp[a[i]]==0){
        continue;
    }
    else{
       string tt=a[i];
	        
	        st+= tt[tt.size()-2];
	        st+=tt[tt.size()-1];
	        
	        if(mp[a[i]]>=2)
	        mp[a[i]]=0;
        }
        

    }
    cout<<st<<endl;
get_out;
}

