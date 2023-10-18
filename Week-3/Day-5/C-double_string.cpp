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
   cin >> n;
   vector<string> v;
   map<string,string> m;
   for(int i=0;i<n;i++){
    string s;
    cin >> s;
    v.pb(s);
    m.insert({s,s});
   }
   for(int i=0;i<n;i++){
      string s2= v[i];
      ll size=v[i].length();
      auto pos = 1;
      bool ok=false;
      while(pos<size){
        if( m.find(s2.substr(0,pos))!=m.end() && m.find(s2.substr(0+pos,size-(pos)))!=m.end()  ){
          cout << 1 ;
          ok = true;
          break;
        }
        pos++;
 
      }
      if(ok==false){
        cout << 0 ;
      }
 
    
   }
   cout << endl;
    
}
get_out;
}