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
//     lol last = -1, day = -1, ans = 0;
//     bool flag = true;
//     while(m--) {
//         lol a, b; cin>>a>>b;
//         if(last==-1) {
//             ans = max(b+a-1, ans);
//             last = b;
//             day = a;
//             continue;
//         }
//         lol x = a-day;
//         lol y = b-last;
//         if(x<abs(y)) flag = false;
//         else {
//             y=b+(x-y)/2;
//         }
//         ans = max(ans, y);
//         last = b;
//         day = a;
//     }
//     last += n-day;
//     ans = max(ans, last);
//     if(flag)cout<<ans<<endl; else cout<<"IMPOSSIBLE"<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }
