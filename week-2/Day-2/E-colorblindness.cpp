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
cin>>n;
string s1,s2;
cin>>s1>>s2;
for(ll i=0;i<n;i++){
    if(s1[i]=='G'){
        s1[i]='B';
    }
    if(s2[i]=='G'){
        s2[i]='B';
    }
}
if(s1==s2)yes;
else no;
    
}
get_out;
}