#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define pp  pop_back
#define get_out return 0
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll>v;
    ll sum=0;
    int  c=0;
    for(int i=0;i<n;i++)
    {
    	ll L=i;
    	ll R=n-i-1;
    	if(s[i]=='L')
    	{
    		if(R>L){
    			c++;
    		sum+=R;
    		v.pb(R-L);
    		}
    		else
    		sum+=L;
    	}
    	else
    	{
    		if(L>R)
    		{
    			c++;
    			sum+=L;
    			v.pb(L-R);
    		}
    		else
    		sum+=R;

    	}
    }
    vector<ll>res(n+5);

    for(int i=c;i<=n;i++)
    {
    	res[i]=sum;
    }
    sort(v.begin(),v.end(),greater<ll>());

    for(int i=c-1;i>=1;i--)
    {
    	sum-=v.back();
    	v.pp();
    	res[i]=sum;
    }
   for(int i=1;i<=n;i++){
    	 cout<<res[i]<<' ';
    }
    cout<<endl;


}
int main()
{
ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

ll t,i,j;
cin>>t;
while(t--)
{

solve();

}
get_out;
}