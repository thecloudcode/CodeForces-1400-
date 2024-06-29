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
// const lol N = 1e7;
//
// void solve() {
//     lol n; cin>>n; vector<lol>x(n); lol W = 0;
//     for(lol i=0;i<n;i++) {
//         cin>>x[i];
//         W+=x[i];
//     }
//     set<lol>ans;
//     vector<bool>dp(N, false);
//     dp[0] = true;
//     for(lol i: x) {
//         for(lol j=W;j>=0;j--) {
//             if(j-i>=0) {
//                 if(dp[j-i]) {
//                     ans.insert(j);
//                     dp[j] = true;
//                 }
//             }
//         }
//     }
//     cout<<ans.size()<<endl;
//     for(lol i: ans) cout<<i<<" ";
//     cout<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }
