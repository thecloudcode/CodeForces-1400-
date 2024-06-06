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
//     lol a, b, c, d; cin>>a>>b>>c>>d;
//     lol ans = 0;
//     if(b==1) {
//         cout<<(a-1)*c<<endl; return;
//     }
//     while(a!=1) {
//         if(a%b==0) {
//             if((a-a/b)*c<=d) {
//                 ans+=(a-a/b)*c;
//             }else {
//                 ans+=d;
//             }
//             a/=b;
//         }else {
//             if(a>b) {
//                 ans+=(a%b)*c;
//                 a-=a%b;
//             }else {
//                 ans+=(a-1)*c;
//                 a=1;
//             }
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
