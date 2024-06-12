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
//
// // lol f(lol i, lol k, vector<lol>&x, vector<lol>&y, vector<vector<lol>>&dp) {
// //     if(dp[i][k]!=-1) return dp[i][k];
// //     lol pick = 0; lol notpick = 0;
// //     if(i+1<x.size()) {
// //         if(k-x[i]>=0) pick = y[i] + f(i+1,k-x[i],x,y,dp);
// //         notpick = f(i+1,k,x,y,dp);
// //     }
// //     return dp[i][k]=max(pick, notpick);
// // }
//
// void solve() {
//     lol n, k; cin>>n>>k;
//     vector<lol>x(n); for(lol i=0;i<n;i++) cin>>x[i];
//     vector<lol>y(n); for(lol i=0;i<n;i++) cin>>y[i];
//     // vector<vector<lol>>dp(n+1,vector<lol>(k+1,-1));
//     vector<vector<lol>>dp(n+1,vector<lol>(k+1,0));
//
//     for(lol i=n-1;i>=0;i--) {
//         for(lol j=0;j<=k;j++) {
//             if(j+x[i]<=k) dp[i][j] = y[i]+dp[i+1][j+x[i]];
//             dp[i][j] = max(dp[i][j], dp[i+1][j]);
//         }
//     }
//     // cout<<f(0,k,x,y,dp)<<endl;
//     // for(lol i=0;i<=n;i++) {
//     //     for(lol j=0;j<=k;j++) {
//     //         cout<<dp[i][j]<<" ";
//     //     }cout<<endl;
//     // }
//     cout<<dp[0][0]<<endl;
// }
//
// int main() {
//     ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }