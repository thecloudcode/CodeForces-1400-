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

lol mod(lol x) { return ((x%MOD)+MOD)%MOD; }
lol add(lol a, lol b) { return mod(mod(a)+mod(b)); }
lol mul(lol a, lol b) { return mod(mod(a)*mod(b)); }

lol n = 1e6;
vector<vector<lol>>dp(n+1, vector<lol>(2,1));

void solve() {
    lol n; cin>>n;


    cout<<add(dp[n-1][0],dp[n-1][1])<<endl;
}

int main() {
    fast;
    for(lol i=1;i<n;i++) {
        dp[i][0] = add(mul(dp[i-1][0],4),dp[i-1][1]);
        dp[i][1] = add(dp[i-1][0],mul(dp[i-1][1],2));
    }
    lol t = 1;
    cin >> t;
    while (t--) solve();
}
