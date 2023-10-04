//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int>a , int n){
        
 long long int i = 0, j = 0, s = 0;
    long long int mx = INT_MIN;
    while (j < n)
    {
        s += a[j];
        if (j >= k - 1)
        {
            mx = max(mx, s);
            s -= a[i];
            i++;
        }
        j++;
    }
        
      return mx;  
        
    }
    };

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends