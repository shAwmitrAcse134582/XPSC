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
ll i,j;
int main()
{
fast;
ll t;
cin>>t;
while(t--){
 int n;
        cin>>n;
        int a[n];
 
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            string s;
            cin>>s;
            for(j=0; j<x; j++)
            {
                if(s[j]=='U' && a[i]==0)
                    a[i]=9;
                else if(s[j]=='U'&& a[i]!=0)
                    a[i]--;
                else if(s[j]=='D' && a[i]==9)
                    a[i]=0;
                else if(s[j]=='D' && a[i]!=9)
                    a[i]++;
            }
        }
        for(i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    
}
get_out;
}