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
// set<char>st;
stack<char>st;
for(ll i=0;i<n;i++){
    s[i]=tolower(s[i]);
    
}
st.push(s[0]);
for(ll i=1;i<n;i++){
    if(st.top()!=s[i]){
        st.push(s[i]);
    }
}
string s1="";
// for(auto it=st.begin();it!=st.end();it++){
//     s1+=*it;
// }
while(!st.empty()){
s1+=st.top();
st.pop();
}
reverse(s1.begin(),s1.end());
// cout<<s1<<endl;
if(s1=="meow")yes;
else no;

}
get_out;
}