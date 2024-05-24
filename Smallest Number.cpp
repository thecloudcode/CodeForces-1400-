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
// unordered_map<double, lol>mapp;
//
// void solve() {
//     vector<lol>x(4);
//     cin>>x[0]>>x[1]>>x[2]>>x[3];
//     char xa, xb, xc; cin>>xa>>xb>>xc;
//     sort(x.begin(), x.end());
//     if(xa=='*' and xb=='*' and xc=='+') {
//         x = {x[0]*x[3], x[1], x[2]};
//         sort(x.begin(), x.end());
//         x = {x[0]*x[1],x[2]};
//         sort(x.begin(), x.end());
//         cout<<x[0]+x[1]<<endl;
//         return;
//     }
//     if(xa=='*' and xb=='+' and xc=='*') {
//         x = {x[2]*x[1], x[0], x[3]};
//         sort(x.begin(), x.end());
//         x = {x[1]+x[2],x[0]};
//         sort(x.begin(), x.end());
//         cout<<x[0]*x[1]<<endl;
//         return;
//     }
//     // if(xa=='+' and xb=='*' and xc=='*') {
//     //     x = {x[2]*x[1], x[0], x[3]};
//     //     sort(x.begin(), x.end());
//     //     x = {x[1]+x[2],x[0]};
//     //     sort(x.begin(), x.end());
//     //     cout<<x[0]*x[1]<<endl;
//     //     return;
//     // }
//     if(xa=='+') {
//         x = {x[0], x[1], x[2]+x[3]};
//     }else {
//         x = {x[0]*x[1], x[2],x[3]};
//     }
//     sort(x.begin(), x.end());
//     if(xb=='+') {
//         x = {x[0], x[1]+x[2]};
//     }else {
//         x = {x[0]*x[1], x[2]};
//     }
//     sort(x.begin(), x.end());
//     if(xc=='+') {
//         cout<<x[0]+x[1]<<endl;
//     }else {
//         cout<<x[0]*x[1]<<endl;
//     }
// }
//
// int main() {
//     fast; solve();
// }