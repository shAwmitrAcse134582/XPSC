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
const ll mod = 1e9 + 7;

int main()
{
fast;
ll t;
cin>>t;
while(t--){
ll n, k;
        cin >> n >> k;
        ll ans = 1;
        while (k--)
        {
            ans = ((ans % mod) * (n % mod)) % mod;
        }
        cout << ans << endl;
}
get_out;
}