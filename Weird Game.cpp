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
//     string x; cin>>x;
//     string y; cin>>y;
//     lol xo = 0;
//     lol yo = 0;
//     lol common = 0;
//     for(lol i=0;i<2*n;i++) {
//         if(x[i]=='1' and y[i]=='1') {
//             common++;
//         }else if(x[i]=='1') {
//             xo++;
//         }else if(y[i]=='1') {
//             yo++;
//         }
//     }
//     if(common%2==1) {
//         xo++;
//     }
//     lol xoo = 0; lol yoo = 0;
//     xoo+=common/2;
//     yoo+=common/2;
//     xoo+=min(xo,yo);
//     yoo+=min(xo,yo);
//     if(yo>xo) {
//         yoo+=floor((double)(yo-xo)/2);
//     }else if(xo>yo) {
//         xoo+=ceil((double)(xo-yo)/2);
//     }
//     if(xoo==yoo) {
//         cout<<"Draw"<<endl;
//     }else if(xoo>yoo) {
//         cout<<"First"<<endl;
//     }else {
//         cout<<"Second"<<endl;
//     }
// }
//
// int main() {
//     fast; solve();
// }