// #include <bits/stdc++.h>
// using namespace std;
//
// #define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define lol long long int
//
// bool check(lol x, lol a, lol b, lol c) {
//     lol ba = 0; lol bc = 0;
//     if(a<x) {
//         if(b>=x-a) {
//             b-=x-a;
//             a=x;
//         }else {
//             a+=b;
//             b=0;
//         }
//     }if(c<x) {
//         if(b>=x-c) {
//             b-=x-c;
//             c=x;
//         }else {
//             c+=b;
//             b=0;
//         }
//     }
//     if(b>x) {
//         if(a<x) {
//             b-=x-a;
//             ba = -1;
//             a=x;
//         }
//         if(b>x and c<x) {
//             b-=x-c;
//             bc = -1;
//             c=x;
//         }
//     }
//     if(a>x and ba==0 and bc<=0) {
//         ba=a-x;
//         a = x;
//     }
//     if(c>x and bc==0 and ba<=0) {
//         bc=c-x;
//         c = x;
//     }
//     if(ba<0) ba = 0;
//     if(bc<0) bc = 0;
//     if(a>x or (b+ba+bc)>x or c>x) {
//         return false;
//     }
//     return true;
// }
//
// void solve() {
//     lol a; lol b; lol c;
//     cin>>a>>b>>c;
//
//     lol l = 0; lol e = max(a,max(b,c));
//     lol ans = INT_MAX;
//     while(l<=e) {
//         lol mid = (l+e)/2;
//         if(check(mid, a, b, c)) {
//             ans = min(ans, mid);
//             e = mid - 1;
//         }else {
//             l = mid + 1;
//         }
//     }
//     cout<<ans<<endl;
// }
//
// int main() {
//     fast;
//     lol t; cin>>t;
//     while(t--) {
//         solve();
//     }
// }