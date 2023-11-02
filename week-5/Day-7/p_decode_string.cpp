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
    string s;
    cin>>s;
    char m;
    string st="";
    for(ll i=s.size()-1;i>=0;){
        if(s[i]=='0'){
             m=(s[i-2]-48)*10+s[i-1]-48;
             st+=m+96;
             i-=3;
         }
         else{
            m=s[i]-48;
            st+=m+96;
            i--;
         }
    }
    reverse(st.begin(),st.end());
    cout<<st<<endl;
}
get_out;
}