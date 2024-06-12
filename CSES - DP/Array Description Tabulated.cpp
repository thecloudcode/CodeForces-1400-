//  /* Badal Prasad Singh */
//
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
//     lol n, m; cin>>n>>m;
//     vector<lol>x(n); for(lol i=0;i<n;i++) cin>>x[i];
//     vector<vector<lol>>dp(n+1, vector<lol>(m+1,0));
//     for(lol i=0;i<=m;i++) dp[n][i] = 1;
//     for(lol i=n-1;i>=0;i--) {
//         for(lol j=1;j<=m;j++) {
//             if(x[i]==0 and i==n-1) dp[i][j]+=m;
//             else {
//                 dp[i][j]+=dp[i+1][j];
//         }
//     }
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }
