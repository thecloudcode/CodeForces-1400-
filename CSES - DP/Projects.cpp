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
//     lol n; cin>>n; vector<vector<lol>>x;
//     for(lol i=0;i<n;i++) {
//         vector<lol>xx(3);
//         cin>>xx[0]>>xx[1]>>xx[2];
//         x.push_back(xx);
//     }
//     lol ans = 0;
//     vector<lol>dp(n,0);
//     for(lol i=n-1;i>=0;i--) {
//         // dp[i] = max(x[i][2], dp[i]);
//         for(lol j=i+1;j<n;j++) {
//             // dp[j] = max(dp[j], x[j][2]);
//             if(x[j][0]>x[i][1]) {
//                 dp[i] = max(dp[i], x[i][2]+dp[j]);
//             }
//         }
//         ans = max(ans, dp[i]);
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
