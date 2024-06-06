// /* Badal Prasad Singh */
//
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define yes cout<<"YES"<<endl;
// #define lol long long int
// #define no cout<<"NO"<<endl;
// #define noo cout<<-1<<endl;
// #define anz cout<<ans<<endl;
// const int MOD = 1000000007;
//
// // lol f(lol s, vector<lol>&dp) {
// //     if(s==0) return 1;
// //     if(dp[s]!=-1) return dp[s];
// //     lol ans = 0;
// //     for(lol i=1;i<=6;i++) {
// //         if(s-i>=0) ans+=f(s-i,dp);
// //     }
// //     return dp[s]=ans%MOD;
// // }
//
// void solve() {
//     lol n; cin>>n;
//     // vector<lol>dp(n+1,-1);
//     // cout<<f(n, dp)<<endl;
//     vector<lol>dp(n+1,0); dp[0] = 1;
//     for(lol i=1;i<=n;i++) {
//         for(lol j=1;j<=6 and j<=i;j++) {
//             dp[i] = (dp[i]+dp[i-j])%MOD;
//         }
//     }
//     cout<<dp[n]<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     while (t--) solve();
// }
