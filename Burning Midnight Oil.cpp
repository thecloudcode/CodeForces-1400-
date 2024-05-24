// // /* Badal Prasad Singh */
// // #include<bits/stdc++.h>
// // using namespace std;
// //
// // #define fast  ios_base::sync_with_stdio(false)
// // #define lol long long int
//
// bool check(lol mid, lol k, lol n) {
//     lol s = mid;
//     lol kk = k;
//     while(true) {
//
//         lol x = floor(mid/kk);
//         if(x==0) {
//             break;
//         }
//         s += x;
//         kk *= k;
//     }
//     return s>=n;
// }
//
//
// void solve() {
//     lol n; lol k; cin>>n>>k;
//     lol l = 0; lol r = n;
//     lol ans = INT_MAX;
//     while(l<=r) {
//         lol mid = (l+r)/2;
//         if(check(mid, k, n)) {
//             ans = min(ans, mid);
//             r = mid - 1;
//         }else {
//             l = mid + 1;
//         }
//     }
//     cout<<ans<<endl;
// }
//
// int main() {
//     fast; solve();
// }