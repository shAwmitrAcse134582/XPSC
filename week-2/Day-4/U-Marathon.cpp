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
 ll a[4];
 for(ll i=0;i<4;i++){
    cin>>a[i];
 }
 ll cnt=0;
 for(ll i=1;i<4;i++){
    if(a[0]<a[i]){
        cnt++;

    }
 }
 cout<<cnt<<endl;
    
}
get_out;
}