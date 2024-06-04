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
// void solve() {
//     lol m, n; cin>>m>>n;
//     vector<vector<lol>>x(m, vector<lol>(n));
//     for(lol i=0;i<m;i++) {
//         for(lol j=0;j<n;j++) cin>>x[i][j];
//     }
//     vector<lol>dp(m);
//     for(lol i=0;i<n;i++) {
//         lol f = 0;
//         for(lol j=0;j<m;j++) {
//             lol s = max(f, dp[j]);
//             dp[j] = s + x[j][i];
//             f = dp[j];
//         }
//     }
//     for(auto i: dp) cout<<i<<" ";
//     cout<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }
