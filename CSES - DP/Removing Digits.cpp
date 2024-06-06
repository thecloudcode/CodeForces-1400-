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
//     lol n; cin>>n; lol c = 0;
//     while(n) {
//         lol maxx = INT_MIN;
//         lol nn = n;
//         while(nn>0) {
//             maxx = max(maxx,nn%10);
//             nn/=10;
//         }
//         c++;
//         n-=maxx;
//     }
//     cout<<c<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }
