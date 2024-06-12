//  /* Badal Prasad Singh */
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
//     lol n; cin>>n; vector<lol>dp(n); dp[0] = 1; dp[1] = 3;
//     for(lol i=2;i<n;i++)dp[i]=(dp[i-1]+dp[i-2]+2)%MOD;
//     cout<<dp[n-1]<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }
