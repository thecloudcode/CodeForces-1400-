// /* Badal Prasad Singh */
//
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false)
// #define lol long long int
// // #define ulol unsigned long long int
// // #define ff(i,a,b) for(int i=a;i<b;i++)
// // #define fb(i,a,b) for(int i=a;i<b;i--)
//
// void solve2() {
//     lol n; lol a; lol b;
//     cin>>n>>a>>b;
//     string s; cin>>s;
//     vector<lol>x;
//     lol c = 0;
//     for(char i: s) {
//         if(i=='0') {
//             c++;
//         }else {
//             x.push_back(c);
//             c = 0;
//         }
//     }
//     if(c!=0){ x.push_back(c); }
//     lol ans = 0;
//     lol nn = x.size();
//     if(nn==1) {
//         ans = b*(x[0]+1) + n*a;
//         cout<<ans<<endl; return;
//     }else {
//         ans = n*a+(n+1)*2*b;
//         ans += a-x[0]*b;
//         ans += a-x[nn-1]*b;
//
//         for(lol i=1;i<nn-1;i++) {
//             lol z = (x[i]-1)*2*b+(x[i]*a);
//             lol y = (x[i]-1)*b+(x[i]*a+2*a);
//             if(y<z) {
//                 ans -= (x[i]-1)*b;
//                 ans += 2*a;
//             }
//         }
//     }
//     cout<<ans<<endl;
//
// }
//
// int main() {
//     fast;
//     lol t; cin>>t;
//     while(t--) {
//         solve2();
//     }
//     return 0;
// }