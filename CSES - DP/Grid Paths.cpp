 /* Badal Prasad Singh */

#include<bits/stdc++.h>
using namespace std;

#define fast  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define yes cout<<"YES"<<endl;
#define lol long long int
#define no cout<<"NO"<<endl;
#define noo cout<<-1<<endl;
#define anz cout<<ans<<endl;
const lol MOD = 1e9+7;

// lol f(lol i, lol j, vector<string>&x, vector<vector<lol>>&dp) {
//     lol n = x.size();
//     if(dp[i][j]!=-1) return dp[i][j];
//     if(x[i][j]=='*') return 0;
//     if(i==n-1 and j==n-1) return 1;
//     lol a = 0; lol b = 0;
//     if(i+1<n) a += f(i+1, j, x, dp);
//     if(j+1<n) b += f(i, j+1, x, dp);
//     return dp[i][j] = a+b;
// }

void solve() {
    lol n;cin>>n;
    vector<string>x(n);
    for(lol i=0;i<n;i++) cin>>x[i];
    vector<vector<lol>>dp(n,vector<lol>(n,0));
    dp[n-1][n-1]=1;
    for(lol i=n-1;i>=0;i--) {
        for(lol j=n-1;j>=0;j--) {
            if(x[i][j]=='*') dp[i][j] = 0;
            else {
                if(i+1<n) dp[i][j]=(dp[i][j]+dp[i+1][j])%MOD;
                if(j+1<n) dp[i][j]=(dp[i][j]+dp[i][j+1])%MOD;
            }
        }
    }
    // cout<<f(0,0,x,dp)<<endl;
    // for(lol i=0;i<n;i++) {
    //     for(lol j=0;j<n;j++) {
    //         cout<<dp[i][j]<<" ";
    //     }cout<<endl;
    // }
    cout<<dp[0][0]<<endl;
}

int main() {
    fast;
    lol t = 1;
    // cin >> t;
    while (t--) solve();
}
