// /* Badal Prasad Singh */
//
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false)
// #define lol long long int
//
// void solve() {
//     lol n; lol m; cin>>n>>m;
//     vector<string>x;
//     for(lol i=0;i<n;i++) {
//         string y; cin>>y;
//         x.push_back(y);
//     }
//     lol a=0;lol b=0;
//     lol ans = 0;
//     for(lol i=0;i<n;i++) {
//         if(i%2==0) {
//             for(lol j=0;j<m;j++) {
//                 if(x[i][j]=='W') {
//                     ans+=abs(i-a)+abs(j-b); a = i; b = j;
//                 }
//             }
//         }else {
//             for(lol j=m-1;j>=0;j--) {
//                 if(x[i][j]=='W') {
//                     ans+=abs(i-a)+abs(j-b); a = i; b = j;
//                 }
//             }
//         }
//     }
//     cout<<ans<<endl;
// }
//
// int main() {
//     fast; solve();
// }