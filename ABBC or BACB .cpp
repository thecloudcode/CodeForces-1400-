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
//     string x; cin>>x;
//     lol a = 0; lol ans = 0; lol n = x.size(); lol first = 0; lol second = 0; bool flag = false;
//     lol b = 0;
//     bool last = false;
//     if(x[n-1]=='B') {
//         last = true;
//     }
//     for(lol i=0;i<n;i++) {
//         if(x[i]=='A') {
//             if(flag) second++; else first++;
//         }else {
//             b++;
//             if(last) {
//                 ans+=first; first = 0;continue;
//             }
//             if(b==1) {
//                 flag = true;
//             }
//             if(first>=second) {
//                 if(b!=1){
//                     ans+=first; first = second; second = 0;
//                 }
//             }else {
//                 ans+=second; first = 0; second = 0;
//             }
//         }
//         // cout<<x[i]<<" "<<first<<" "<<second<<endl;
//     }
//     if(flag)ans+=max(second, first);
//     cout<<ans<<endl;
//     // if(ans==4) cout<<x<<endl;
// }
//
// int main() {
//     lol t; cin>>t;
//     while(t--) {
//         solve();
//     }
// }