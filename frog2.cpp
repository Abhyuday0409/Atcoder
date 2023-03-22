#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,k;
    cin>>n>>k;
    
    vector<int> stones(n);
    for(int i=0;i<n;i++)
        cin>>stones[i];
    vector<int> dp(n, INT_MAX);
    dp[0] = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=i+k;j++){
            if(j < n)
                dp[j] = min(dp[j], dp[i] + abs(stones[j] - stones[i]));
        }
    }
    cout<<dp[n-1];
    return 0;
}
