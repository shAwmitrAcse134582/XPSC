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
string s,t;
cin>>s>>t;
ll i=0;
ll cnt=0;
ll n=s.size();
while(i<n){
    if(s[i]!=t[i]){
        cnt++;
    }
    i++;
}
cout<<cnt<<endl;
get_out;
}