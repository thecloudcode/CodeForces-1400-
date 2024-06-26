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
    lol a; lol b; cin>>a>>b; lol ans = 0;
    while(a!=b) {
        if(a>b) a-=b;
        else if(b>a) b-=a;
        ans++;
    }
    cout<<ans<<endl;
}

int main() {
    fast;
    lol t = 1;
    cin >> t;
    while (t--) solve();
}
