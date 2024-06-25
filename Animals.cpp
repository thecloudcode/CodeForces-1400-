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
// lol f(lol i, lol m, vector<lol>&x, vector<lol>&dp) {
//     if(i>=x.size() or m<0) return 0; lol pick = 0;
//     if(dp[i]!=-1) return dp[i];
//     if(m-(x.size()-i)*x[i]>=0) pick = 1 + f(i+1,m-(x.size()-i)*x[i],x,dp);
//     lol notpick = f(i+1,m,x,dp);
//     return max(pick,notpick);
// }
//
// void solve() {
//     lol n, m; cin>>n>>m;
//     vector<lol>x(n); for(lol i=0;i<n;i++) cin>>x[i];
//     vector<lol>dp(n+1,0);
//     cout<<f(0,m,x,dp)<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }
