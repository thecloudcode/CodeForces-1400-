/* Badal Prasad Singh */

#include<bits/stdc++.h>
using namespace std;

#define fast  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define yes cout<<"YES"<<endl;
#define lol long long int
#define no cout<<"NO"<<endl;
#define noo cout<<-1<<endl;
#define anz cout<<ans<<endl;

lol f(lol a, lol b, vector<lol>&x, vector<vector<lol>>&dp) {
    if(dp[a][b]!=-1) return dp[a][b];
    if(b<0 or b<a or a>=x.size()) return 0;
    if(a==b) return dp[a][b] = x[a];
    else return dp[a][b] = max(x[a]-f(a+1,b,x,dp), x[b]-f(a,b-1,x,dp));
}

void solve() {
    lol n; cin>>n; vector<lol>x(n); lol s = 0;
    vector<vector<lol>>dp(n+1,vector<lol>(n+1,-1));
    for(lol i=0;i<n;i++) {
        cin>>x[i];
        s+=x[i];
    }
    cout<<(s+f(0,n-1,x,dp))/2<<endl;
}

int main() {
    fast;
    lol t = 1;
    // cin >> t;
    while (t--) solve();
}




















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
// lol f(lol i, lol j, bool flag, vector<lol>&x) {
//     if(i>j) return 0;
//     if(i>=x.size()) return 0;
//     if(j<0) return 0;
//
//     lol a = 0; lol b = 0; lol c = 0; lol d = 0;
//     if(flag) a = f(i+1,j,false,x); else a = f(i+1,j,true,x);
//     if(flag) d = f(i,j-1,false,x); else d = f(i,j-1,true,x);
//     if(flag) d+=x[j];
//     if(flag) a+=x[i];
//     return max({a,d});
//     // return max({x[i]+f(i+2,j,x),x[i]+f(i+1,j-1,x),x[j]+f(i+1,j-1,x),x[j]+f(i,j-2,x)});
// }
// void solve() {
//     lol n; cin>>n;
//     vector<lol>x(n); for(lol i=0;i<n;i++) cin>>x[i];
//     cout<<f(0,n-1,true,x)<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }
