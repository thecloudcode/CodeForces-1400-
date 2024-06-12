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
//     lol n; cin>>n; vector<lol>x(n); for(lol i=0;i<n;i++) cin>>x[i];
//
//     for(lol i=1;i<=n/3;i++) {
//         if(n%i==0) {
//             for(lol j=0;j<i;j++) {
//                 lol s = 0;
//                 for(lol k=j;k<n;k+=i) {
//                     s+=x[k];
//                 }
//                 if(s==n/i) {
//                     yes; return;
//                 }
//             }
//         }
//     }
//     no;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }
