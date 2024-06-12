//  /* Badal Prasad Singh */
//
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define yes cout<<"YES"<<endl;
// #define lol int
// #define no cout<<"NO"<<endl;
// #define noo cout<<-1<<endl;
// #define anz cout<<ans<<endl;
// lol m; vector<lol>x;
// lol f(lol i, lol last, vector<vector<lol>>&dp) {
//     // if(i!=0) x[i-1]=last;
//     if(i==x.size()) {
//         // for(lol ii=0;ii<i;ii++) {
//             // cout<<x[ii]<<" ";
//         // }cout<<endl;
//         return 1;
//     }
//     if(dp[i][last]!=-1) return dp[i][last];
//     if(i>0 and x[i]!=0 and abs(x[i]-last)>1) return 0;
//     lol ans = 0;
//     if(x[i]==0) {
//         if(i==0) {
//             for(int j=1;j<=m;j++) {
//                 ans+=f(i+1,j,dp);
//             }
//         }else {
//             if(last>1) ans+=f(i+1,last-1,dp);
//             ans+=f(i+1,last,dp);
//             if(last+1<=m) ans+=f(i+1,last+1,dp);
//         }
//     }else {
//         // if(abs(last-x[i])>1) return 0;
//         ans+=f(i+1,x[i],dp);
//     }
//     return dp[i][last]=ans;
// }
//
// void solve() {
//     lol n; cin>>n>>m;
//     for(lol i=0;i<n;i++) {
//         lol xx; cin>>xx; x.push_back(xx);
//     }
//     vector<vector<lol>>dp(n+1, vector<lol>(m+1,-1));
//     cout<<f(0,0,dp)<<endl;
//
//     // for(lol i=0;i<=m;i++) dp[n][i] = 1;
//     // for(lol i=n-1;i>=0;i--) {
//     //     for(lol j=1;j<=m;j++) {
//     //         dp[i][j]+=dp[]
//     //     }
//     // }
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }