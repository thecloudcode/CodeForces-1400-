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
//
// // lol f(lol k, vector<lol>x, vector<lol>&dp) {
// //     if(k==0) return 0;
// //     if(dp[k]!=-1) return dp[k];
// //     lol ans = INT_MAX;
// //     for(lol i: x) {
// //         if(k-i>=0) ans = min(ans, 1+f(k-i, x, dp));
// //     }
// //     return dp[k]=ans;
// // }
//
// void solve() {
//     lol n, k; cin>>n>>k;
//     vector<lol>x(n);
//     for(lol i=0;i<n;i++) cin>>x[i];
//     // vector<lol>dp(k+1,-1);
//     // lol ans = f(k,x,dp);
//     // if(ans==INT_MAX) ans = -1;
//     // cout<<ans<<endl;
//     vector<lol>dp(k+1,INT_MAX);
//     dp[0]=0;
//     for(lol i=1;i<=k;i++) {
//         for(lol j=0;j<n;j++) {
//             if(i-x[j]>=0) dp[i]=min(dp[i], 1+dp[i-x[j]]);
//         }
//     }
//     if(dp[k]==INT_MAX) cout<<-1<<endl; else cout<<dp[k]<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }
