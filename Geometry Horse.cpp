// #include <bits/stdc++.h>
// using namespace std;
//
// #define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
// #define lol long long int
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// #define noo cout<<-1<<endl;
// #define anz cout<<ans<<endl;
//
// void solve() {
//     lol n; cin >> n;
//     multiset<pair<lol, lol>> m;
//     while(n--) {
//         lol a, b; cin >> a >> b;
//         m.insert({b, a});
//     }
//     lol nn; cin >> nn; vector<lol> x(nn);
//     for(lol i = 0; i < nn; i++) cin>>x[i];
//     lol ans = 0; lol f = 1; lol s = 0; lol ind = 0;
//     for (const auto& it : m) {
//         if(ind>=nn) {
//             ans += it.first*it.second*f;
//             s+=it.second;
//         }else if(s+it.second<=x[ind]) {
//             ans += it.first*it.second*f;
//             if(s+it.second==x[ind]) {
//                 f++; ind++;
//             }
//             s+=it.second;
//         } else if(s+it.second>x[ind]) {
//             lol xx = it.second;
//             while(xx>0 and ind<nn) {
//                 if(s+xx>x[ind]) {
//                     ans += abs(x[ind]-s)*f*it.first;
//                     xx -= abs(x[ind]-s); s=x[ind];
//                     f++; ind++;
//                 }else {
//                     ans += xx*f*it.first;
//                     if(s+xx==x[ind]) {
//                         f++; ind++;
//                     }
//                     s+=xx; xx=0;
//                 }
//             }
//             if(ind>=n and xx>0) {
//                 ans+=xx*it.first*f;
//                 s+=xx; xx = 0;
//             }
//         }
//     }
//     cout<<ans<<endl;
// }
//
// int main() {
//     fast;
//     solve();
//     return 0;
// }
