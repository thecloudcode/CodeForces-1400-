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
// lol f(lol k, vector<lol>x, vector<lol>&dp) {
//     if(k==0) return 1;
//     if(dp[k]!=-1) return dp[k];
//     lol ans = 0;
//     for(lol i: x) {
//         if(k-i>=0) ans+=f(k-i, x, dp);
//     }
//     return dp[k]=ans;
// }
//
// void solve() {
//     lol n, k; cin>>n>>k;
//     vector<lol>x(n);
//     for(lol i=0;i<n;i++) cin>>x[i];
//     // vector<lol>dp(k+1,-1);
//     vector<lol>dp(k+1); dp[0]=1;
//     for(lol i=1;i<=k;i++) {
//         for(lol j: x) {
//             if(i-j>=0) dp[i]=(dp[i]+dp[i-j])%MOD;
//         }
//     }
//     cout<<dp[k]<<endl;
//     // cout<<f(k,x,dp)<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }
