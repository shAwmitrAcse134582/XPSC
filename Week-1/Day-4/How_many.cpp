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
ll s,t;
cin>>s>>t;
ll cnt=0;
for(ll i=0;i<=s;i++){
    for(ll j=0;j<=s;j++){
        for(ll k=0;k<=s;k++){
            if(i+j+k<=s && i*j*k<=t){
                   cnt++;
            }
        }
    }
}
cout<<cnt<<endl;
get_out;
}