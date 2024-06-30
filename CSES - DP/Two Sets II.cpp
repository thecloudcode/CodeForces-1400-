// /* Badal Prasad Singh */
//
// /*
// Hidden KnapSack problem, find the number of times you can make s/2 with the numbers from 1 to n
// */
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
// const lol MOD = 1e9+7;
// lol mod(lol x) { return ((x%MOD)+MOD)%MOD; }
// lol add(lol a, lol b) { return mod(mod(a)+mod(b)); }
// lol mul(lol a, lol b) { return mod(mod(a)*mod(b)); }
//
// void solve() {
//     lol n; cin>>n;
//     lol s = n*(n+1)/2;
//     if(s%2==1) {
//         cout<<0<<endl; return;
//     }
//     vector<vector<lol>>dp(n+1, vector<lol>(s/2+1,0));
//     dp[0][0] = 1;
//     for(lol i=1;i<=n;i++) {
//         for(lol j=0;j<=s/2;j++) {
//             dp[i][j] = dp[i-1][j];
//             if(j-i>=0) {
//                 dp[i][j]=add(dp[i-1][j-i],dp[i][j]);
//             }
//         }
//     }
//     cout<<dp[n-1][s/2]<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }
