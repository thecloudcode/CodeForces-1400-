/* Badal Prasad Singh */

#include<bits/stdc++.h>
using namespace std;

#define fast  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define yes cout<<"YES"<<endl;
#define lol int
#define no cout<<"NO"<<endl;
#define noo cout<<-1<<endl;
#define anz cout<<ans<<endl;

vector<vector<lol>>dp(501,vector<lol>(501, -1));

lol f(lol a, lol b) {
    if(dp[a][b]!=-1) return dp[a][b];
    if(a==b) return dp[a][b] = 0;
    if(a==1) return dp[a][b] = b-1;
    if(b==1) return dp[a][b] = a-1;
    lol ans = INT_MAX;
    for(lol i=1;i<a;i++) {
        ans=min(ans,1+f(i,b)+f(a-i,b));
    }
    for(lol i=1;i<b;i++) {
        ans=min(ans,1+f(a,i)+f(a,b-i));
    }
    return dp[a][b] = ans;
}

void solve() {
    lol a; lol b; cin>>a>>b;
    cout<<f(a,b)<<endl;
}

int main() {
    fast;
    lol t = 1;
    while (t--) solve();
}
