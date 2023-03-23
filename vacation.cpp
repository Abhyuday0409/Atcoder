#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
//    int activities[n+1][3];
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++){
        int a1,b1,c1;
        cin>>a1>>b1>>c1;
        a[i] = a1;
        b[i] = b1;
        c[i] = c1;
    }
    int dp[n+1][3];
    memset(dp, 0, sizeof dp);

    dp[0][0] = a[0];
    dp[0][1] = b[0];
    dp[0][2] = c[0];
    for(int i=1;i<n;i++){
        dp[i][0] = a[i] + max(dp[i-1][1], dp[i-1][2]);
        dp[i][1] = b[i] + max(dp[i-1][0], dp[i-1][2]);
        dp[i][2] = c[i] + max(dp[i-1][0], dp[i-1][1]);
    }
    cout<<max(dp[n-1][0], max(dp[n-1][1], dp[n-1][2]))<<"\n";
    return 0;
//    dp[1][1] = max_i;
//    dp[1][0] = sum;
//    cout<<dp[1][0]<<"\n";
//    for(int i = 2;i<=n;i++){
//        {
//            dp[i][0] = max(dp[i][0], max(dp[i-1][0] + activities[i][(dp[i-1][1] + 1)%3], dp[i-1][0] + activities[i][(dp[i-1][1] + 2)%3]));
//            if(activities[i][(dp[i-1][1] + 1)%3] > activities[i][(dp[i-1][1] + 2)%3])
//                dp[i][1] = (dp[i-1][1] + 1)%3;
//            else
//                dp[i][1] = (dp[i-1][1] + 2)%3;
//        }
//    }
//    cout<<dp[n][0]<<"\n";
//    cout<<dp[1][0]<<"\n";
//    cout<<dp[2][0]<<"\n";
//    cout<<dp[3][0];
    return 0;
}
