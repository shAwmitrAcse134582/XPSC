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
 int  n,m;
    cin>>n;
  int count=0;
  string s=to_string(n);
  int d=s.size();
 
 
 int x=d-1;
 int y=pow(10,x);
 
   m = n - y;
cout<<m<<endl;
    
}
get_out;
}