// /* Badal Prasad Singh */
// /*
// My approach
// */
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
// // lol f(lol i, vector<lol>&x, vector<lol>&dp) {
// //     lol ans = 0;
// //     if(dp[i]!=-1)return dp[i];
// //     for(lol j=i+1;j<x.size();j++) {
// //         if(x[j]>x[i]) {
// //             ans = max(ans, 1+f(j,x,dp));
// //         }
// //     }
// //     return ans;
// // }
//
// void solve() {
//     lol n; cin>>n;
//     vector<lol>x(n); for(lol i=0;i<n;i++) cin>>x[i];
//     // vector<lol>dp(n,-1);
//     // lol ans = 0;
//     // for(lol i=0;i<n;i++) {
//     //     ans = max(ans, 1+f(i,x,dp));
//     // }
//     // cout<<ans<<endl;
//     lol ans = 0;
//     vector<lol>dp(n,0);
//     for(lol i=n-1;i>=0;i--) {
//         for(lol j=n-1;j>=i+1;j--) {
//             if(x[j]>x[i]) {
//                 dp[i] = max(dp[i], 1+dp[j]);
//             }
//         }
//         ans = max(ans,dp[i]);
//     }
//     cout<<ans+1<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }
