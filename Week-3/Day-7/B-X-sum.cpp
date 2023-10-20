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
int n, m;
    cin >> n >> m;
    ll ar[n][m];
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        cin >> ar[i][j];
      }
    }
 
    ll ans = 0;
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        ll s = ar[i][j];
        for(int a = i + 1, b = j + 1; a < n && b < m; a++, b++) {
          s += (ar[a][b]);
        }
        for(int a = i - 1, b = j - 1; a >= 0 && b >= 0; a--, b--) {
          s += ar[a][b];
        }
        for(int a = i - 1, b = j + 1; a >= 0 && b < m; a--, b++) {
          s += ar[a][b];
        }
        for(int a = i + 1, b = j - 1; a < n && b >= 0; a++, b--) {
          s += ar[a][b];
        }
 
        ans = max(ans, s);
      }
    }
 
    cout << ans << endl;

    
}
get_out;
}