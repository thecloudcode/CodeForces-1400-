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
// lol f(lol i, lol j, vector<string>x, vector<vector<lol>>&dp) {
//     if(i+1>=x.size() or j+1>=x[0].size() or j-1<0) return 0;
//     if(x[i][j]=='.') return 0;
//     if(dp[i][j]!=-1) return dp[i][j];
//     lol ans = 0;
//     if(x[i+1][j+1]=='*' and x[i+1][j]=='*' and x[i+1][j-1]=='*') {
//         ans+=1+min(f(i+1,j+1,x,dp),min(f(i+1,j,x,dp),f(i+1,j-1,x,dp)));
//     }
//     return dp[i][j]=ans;
// }
//
// void solve() {
//     lol n, m; cin>>n>>m;
//     vector<string>x;
//     lol c=0;
//     for(lol i=0;i<n;i++) {
//         string a; cin>>a;
//         // for(char i: a) if(i=='*') c++;
//         x.push_back(a);
//     }
//     lol ans = 0;
//     vector<vector<lol>>dp(n+1, vector<lol>(m+1,0));
//     for(lol i=n-1;i>=0;i--) {
//         for(lol j=m-1;j>=0;j--) {
//             if(x[i][j]=='*') ans++; else continue;
//             if(x[i][j]=='.') dp[i][j] = 0;
//             else if(i+1<x.size() and j+1<x[0].size() and j-1>=0) {
//                 if(x[i+1][j+1]=='*' and x[i+1][j]=='*' and x[i+1][j-1]=='*') {
//                     dp[i][j]+=1+min(dp[i+1][j+1],min(dp[i+1][j],dp[i+1][j-1]));
//                 }
//             }
//             ans+=dp[i][j];
//         }
//     }
//     cout<<ans+c<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     cin >> t;
//     while (t--) solve();
// }
