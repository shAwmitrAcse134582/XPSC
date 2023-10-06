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
string s;
cin>>s;
ll i=0;
ll cnt=0;
ll sum=0;
if(s=="0")cout<<0<<endl;
else{
    while(s.size()!=1){
         for(auto c:s){
          sum+=c-'0';
         }
         s=to_string(sum);
         cnt++;
         sum=0;

    }
    cout<<cnt<<endl;
   
}

get_out;
}