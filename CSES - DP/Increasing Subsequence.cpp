/* Badal Prasad Singh */

#include<bits/stdc++.h>
using namespace std;

#define fast  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define yes cout<<"YES"<<endl;
#define lol long long int
#define no cout<<"NO"<<endl;
#define noo cout<<-1<<endl;
#define anz cout<<ans<<endl;

lol f(lol i, vector<lol>x) {
    lol ans = 1;
    for(lol j=i+1;j<x.size();j++) {
        if(x[j]>x[i]) ans = max(ans, 1+f(i+1,))
    }
}

void solve() {
    lol n; cin>>n;
    vector<lol>x(n); for(lol i=0;i<n;i++) cin>>x[i];

}

int main() {
    fast;
    lol t = 1;
    // cin >> t;
    while (t--) solve();
}
