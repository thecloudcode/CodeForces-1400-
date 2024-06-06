// /* Badal Prasad Singh */
//
// #ifdef LOCAL
// #  define _GLIBCXX_DEBUG
// #else
// #  define cerr __get_ce
// #endif
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
//
// // lol f(vector<vector<lol>>x, lol i, lol j, vector<vector<lol>>&dp) {
// //     if(j==x[0].size()) return 0;
// //     if(dp[i][j]!=0) return dp[i][j];
// //     lol one; lol two;
// //     if(i==0) {
// //         one = x[i][j]+f(x,1,j+1,dp);
// //         two = f(x,0,j+1,dp);
// //     }else if(i==1){
// //         one = x[i][j]+f(x,0,j+1,dp);
// //         two = f(x,1,j+1,dp);
// //     }
// //     return dp[i][j] = max(one, two);
// // }
//
// void solve() {
//     lol n; cin>>n;
//     // vector<vector<lol>>dp(2,vector<lol>(n+1,0));
//     vector<vector<lol>>x(2, vector<lol>(n));
//     for(lol i=0;i<2;i++) for(lol j=0;j<n;j++) cin>>x[i][j];
//     lol ans1 = 0; lol ans2 = 0;
//
//     for(lol i=0;i<n;++i) {
//         lol a  = max(ans1, ans2+x[0][i]);
//         lol b = max(ans2, ans1+x[1][i]);
//         ans1 = max(ans1, a);
//         ans2 = max(ans2, b);
//     }
//     cout<<max(ans1, ans2)<<endl;
// }
//
// int main() {
// #ifdef LOCAL
//     auto start_time = clock();
//     cerr << setprecision(3) << fixed;
// #endif
//     cout << setprecision(15) << fixed;
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//
//     int test_count = 1;
//     // cin >> test_count;
//     for (int test = 1; test <= test_count; ++test) {
//         solve();
//     }
//
// #ifdef LOCAL
//     auto end_time = clock();
//     cerr << "Execution time: " << (end_time - start_time) * (int)1e3 / CLOCKS_PER_SEC << " ms\n";
// #endif
// }
