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
// void solve() {
//     lol n, m; cin>>n>>m;
//     unordered_map<lol, lol>map;unordered_map<lol, lol>mapp;
//     while(m--) {
//         lol a, b; cin>>a>>b;
//         if(map[a]) mapp[a] = b;
//         else map[a]=b;
//     }
//     lol ans = 0; lol c = 1;
//     for(auto &pair: map) {
//         cout<<pair.first<<" : "<<pair.second<<endl;
//     }
//     for(lol i=1;i<=n;i++) {
//         if((map[i]==i-1 and i-1!=0) or map[i-1]==i or mapp[i-1]==i or (mapp[i]==i-1 and i-1!=0)) {
//             if(c>1) {
//                 ans+=c*(c-1)/2;
//                 c=1;
//             }
//         }else if(c>1){
//
//         }
//     }if(c>1) ans+=c*(c-1)/2;
//     cout<<c<<endl;
//     ans+=n;
//     cout<<ans<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     cin >> t;
//     while (t--) solve();
// }
