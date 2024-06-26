/* Badal Prasad Singh */

#include<bits/stdc++.h>
using namespace std;

#define fast  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define yes cout<<"YES"<<endl;
#define lol long long int
#define no cout<<"NO"<<endl;
#define noo cout<<-1<<endl;
#define anz cout<<ans<<endl;


void solve() {
    string x; string y; cin>>x>>y; lol n = x.size(); lol m = y.size();
    lol dp[n+1][m+1];
    for(lol i=0;i<=n;i++) {
        for(lol j=0;j<=m;j++) {
            if(i==0) dp[i][j] = j;
            else if(j==0) dp[i][j] = i;
            else if(x[i-1]==y[j-1]) dp[i][j] = dp[i-1][j-1];
            else {
                dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]})+1;
            }
        }
    }
    cout<<dp[n][m]<<endl;
}

int main() {
    fast;
    lol t = 1;
    // cin >> t;
    while (t--) solve();
}
