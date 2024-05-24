// /* Badal Prasad Singh */
//
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false)
// #define lol long long int
//
// void solve() {
//     lol n; cin>>n;
//     lol a = 0; lol g = 0;
//     string ans = "";
//     while(n--) {
//         lol x,y; cin>>x>>y;
//         if(a==g) {
//             if(x<=y) {
//                 a+=x;
//                 ans+="A";
//             }else {
//                 g+=y;
//                 ans+="G";
//             }
//         }else {
//             if(abs(g+y-a)>abs(g-a-x)) {
//                 a+=x; ans+="A";
//             }else {
//                 g+=y; ans+="G";
//             }
//         }
//     }
//     if(abs(g-a)<=500) {
//         // cout<<g<<a<<endl;
//         cout<<ans<<endl;
//     }else {
//         cout<<-1<<endl;
//     }
// }
//
// int main() {
//     fast; solve();
// }