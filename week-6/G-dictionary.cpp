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
string s;
cin>>s;
ll x=s[0]-97;
ll y=s[1]-96;
x=25*x;
if(s[1]>s[0]){
    y=y-1;
}
cout<<x+y<<endl;
    
}
get_out;
}