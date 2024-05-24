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
// void solve(){
//     lol n; lol k;
//     cin>>n>>k;
//     vector<lol>x(n); vector<lol>y(n);
//     for(lol i=0;i<n;i++) cin>>x[i];
//     lol a; cin>>a;
//     for(lol i=0;i<n;i++) cin>>y[i];
//     lol ans = 0;
//     multiset<lol>s;
//     lol xx = k;
//     bool flag = true;
//     for(lol i=0;i<n;i++) {
//         s.insert(y[i]);
//         if(x[i]>xx+s.size()*a) {
//             flag = false; break;
//         }else if(x[i]<=xx) {
//
//         }else {
//             while(s.size()>0 and xx<x[i]) {
//                 multiset<lol>::iterator it = s.begin();
//                 ans+=*it;
//                 xx+=a;
//                 s.erase(it);
//             }
//         }
//     }
//     if(flag) {
//         anz;
//     }else {
//         noo;
//     }
// }
//
// int main() {
//     fast; solve();
// }