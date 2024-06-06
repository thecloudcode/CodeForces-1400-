// /* Badal Prasad Singh */
//
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define yes cout<<"YES"<<endl;
// #define lol int
// #define no cout<<"NO"<<endl;
// #define noo cout<<-1<<endl;
// #define anz cout<<ans<<endl;
// const lol MOD = 1e9+7;
//
// // lol f(lol k, lol ind, vector<lol>x, vector<vector<lol>>&dp) {
// //     if(k==0) return 1;
// //     if(dp[k][ind]!=-1) return dp[k][ind];
// //     lol ans = 0;
// //     for(lol i=ind;i<x.size();i++) {
// //         if(k-x[i]>=0) ans+=f(k-x[i], i, x, dp);
// //     }
// //     return dp[k][ind]=ans;
// // }
//
// void solve() {
//     lol n, k; cin>>n>>k;
//     vector<lol>x(n); for(lol i=0;i<n;i++) cin>>x[i];
//     sort(x.begin(), x.end());
//     // vector<vector<lol>>dp(n+1,vector<lol>(k+1,-1));
//     // cout<<f(k,0,x,dp)<<endl;
//     vector<vector<lol>>dp(n+1,vector<lol>(k+1,0));
//     for(lol i=0;i<=n;i++) {
//         dp[i][0] = 1;
//     }
//     for(lol i=1;i<=n;i++) {
//         for(lol j=1;j<=k;j++) {
//             dp[i][j] = dp[i-1][j]%MOD;
//             if(j-x[i-1]>=0) dp[i][j]=(dp[i][j]+dp[i][j-x[i-1]])%MOD;
//         }
//     }
//     // for(lol i=0;i<=n;i++) {
//         // for(lol j=0;j<=k;j++) {
//             // cout<<dp[i][j]<<" ";
//         // }cout<<endl;
//     // }
//     cout<<dp[n][k]<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }
