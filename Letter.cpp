//  /* Badal Prasad Singh */
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
//     string x; cin>>x;
//     lol a = 0, b = 0, c = 0, d = 0;
//     for(char i: x) {
//         if((int)(i)>=97) c++; else d++;
//     }
//     lol ans = INT_MAX;
//     for(char i: x) {
//         if((int)(i)>=97) {
//             c--;
//             ans = min(ans, d+a);
//             a++;
//         }else {
//             d--;
//             ans = min(ans, d+a);
//             b++;
//         }
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
