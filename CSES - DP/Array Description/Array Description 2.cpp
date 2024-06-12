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
// const lol MOD = 1e9+7;
//
// void solve() {
//     lol n, m; cin>>n>>m;
//     vector<lol>x(n); for(lol i=0;i<n;i++) cin>>x[i];
//     vector<vector<lol>>dp(n, vector<lol>(m+2,0));
//     for(lol i=0;i<n;i++) {
//         if(i==0) {
//             if(x[i]==0) for(lol j=1; j<=m; j++) dp[i][j] = 1;
//             else dp[i][x[i]] = 1;
//         }else {
//             if(x[i]==0) {
//                 for(lol j=1;j<=m;j++) {
//                     dp[i][j] = (dp[i-1][j-1]+dp[i-1][j]+dp[i-1][j+1])%MOD;
//                 }
//             }else {
//                 dp[i][x[i]] = (dp[i-1][x[i]-1]+dp[i-1][x[i]]+dp[i-1][x[i]+1])%MOD;
//             }
//         }
//     }
//     lol ans = 0;
//     for(lol j=1; j<=m; j++) {
//         ans = (ans+dp[n-1][j])%MOD;
//     }
//     cout<<ans<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }
