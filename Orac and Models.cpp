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
//     lol n; cin>>n; vector<lol>x(n);
//     for(lol i=0;i<n;i++) cin>>x[i];
//
//     vector<lol>dp(n+1, 1);
//     for(lol i=1;i<=n;i++) {
//         for(lol j=2*i;j<=n;j+=i) {
//             if(x[j-1]>x[i-1]) {
//                 dp[j] = max(dp[j], dp[i]+1);
//             }
//         }
//     }
//     cout<<*max_element(dp.begin(), dp.end())<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     cin >> t;
//     while (t--) solve();
// }
