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
//     lol k; cin>>k; string x; cin>>x;
//     lol ans = 0; lol i = 0; lol j = 0; lol one = 0;
//     while(j<x.size()) {
//         if(x[j]=='1') one++;
//         while(one>k) {
//             if(x[i]=='1') one--;
//             if(one==k) ans++;
//             i++;
//         }
//         if(one==k) ans++;
//         j++;
//     }
//     while(i<x.size()) {
//         if(x[i]=='1') one--;
//         if(one==k) ans++;
//         if(one<k) break;
//         i++;
//     }
//     cout<<ans<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }
