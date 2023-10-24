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
string str;
        cin>>str;
        ll count=1;
        set<char>s;
        for(ll i=0; i<str.size(); i++)
        {
            s.insert(str[i]);
            if(s.size()==4)
            {
                s.clear();
                s.insert(str[i]);
                count++;
            }
 
        }
        cout<<count<<endl;
    
}
get_out;
}