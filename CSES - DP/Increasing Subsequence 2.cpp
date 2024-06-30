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
    lol n; cin>>n; vector<lol>dp;
    for(lol i=0;i<n;i++) {
        lol x; cin>>x;
        auto it = lower_bound(dp.begin(), dp.end(), x);
        if(it == dp.end()) dp.push_back(x);
        else *it = x;
        // for(lol i: dp) {
            // cout<<i<<" ";
        // }cout<<endl;
    }
    cout<<dp.size()<<endl;
}

int main() {
    fast;
    lol t = 1;
    // cin >> t;
    while (t--) solve();
}
