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
ll x;
cin>>x;
if(x<=1399){
cout<<"Division 4"<<endl;
}
else if(x>=1400 && x<=1599){
  cout<<"Division 3"<<endl;
}
else if(x>=1600 && x<=1899){
    cout<<"Division 2"<<endl;
}
else{
  cout<<"Division 1"<<endl;
}
}
get_out;
}