// #include <bits/stdc++.h>
// using namespace std;
//
// #define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define lol long long int
//
// lol check(lol a, lol b, vector<lol>x, lol n) {
//     lol ans = 2;
//     if(b-a==0) return 1;
//     if(b-a==1) return 2;
//     for(lol i=a-1;i<b-2;i++) {
//         ans++;
//         if(x[i]>=x[i+1] and x[i+1]>=x[i+2]) {
//             ans--;
//         }
//     }
//     return ans;
// }
//
// void solve() {
//     lol n; lol m; cin>>n>>m;
//     vector<lol>x(n);
//     for(lol i=0;i<n;i++) cin>>x[i];
//     while(m--) {
//         lol a; lol b; cin>>a>>b;
//         lol ans = check(a, b, x, n);
//         cout<<ans<<endl;
//     }
// }
//
// int main() {
//     fast; solve();
// }
//
