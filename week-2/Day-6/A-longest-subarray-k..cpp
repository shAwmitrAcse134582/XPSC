int longestSubarrayWithSumK(vector<int> a, long long k) {
   long long int i=0,j=0,sum=0,mx=0;
   long long int n=a.size();
        while(j<n){
            sum+=a[j];
            while(sum>k){
                sum-=a[i];
                i++;
            }
            if(sum==k){
                mx=max(mx,j-i+1);
            }
            j++;
        }
        return mx;  
}