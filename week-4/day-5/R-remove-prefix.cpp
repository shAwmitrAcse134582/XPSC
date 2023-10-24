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
 int n;
  cin>>n;
  vector<int>v(n);
  set<int>s;
  for(int i=0;i<n;i++)
  {
  	cin>>v[i];
  }
  int cnt=0;
  for(int i=n-1;i>=0;i--)
  {
  	s.insert(v[i]);
  	cnt++;
  	if(cnt>s.size())
  	     break;
  }
  cout<<v.size()-s.size()<<endl;
}
get_out;
}