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
string s;
cin>>s;
set<char>st;
for(ll i=0;i<s.size();i++){
    st.insert(s[i]);
}
string s2="abcdefghijklmnopqrstuvwxyz";
string ans="";
for(auto it=st.begin();it!=st.end();it++){
    ans+=*it;
}
// for(auto val:ans){
//     cout<<val<<endl;
// }
for(ll i=0;i<26;i++){
    if(s2[i]!=ans[i]){
        cout<<s2[i]<<endl;
        return 0;
    }
   
}
cout<<"None"<<endl;

get_out;
}