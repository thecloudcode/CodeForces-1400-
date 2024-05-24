// /* Badal Prasad Singh */
//
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false)
// #define lol long long int
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// #define noo cout<<-1<<endl;
// #define anz cout<<ans<<endl;
//
// void solve() {
//     lol n; cin>>n;
//     lol x = 0; lol k = 1;
//     while(x<n) {
//         x+=k; k*=3;
//     }
//     while(k) {
//         if(x-k>=n) {
//             x-=k;
//         }
//         k/=3;
//     }
//     cout<<x<<endl;
// }
//
// int main() {
//     fast;
//     lol t; cin>>t;
//     while(t--) {
//         solve();
//     }
// }