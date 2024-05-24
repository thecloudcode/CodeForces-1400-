// /* Badal Prasad Singh */
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false)
// #define lol long long
//
// bool check(lol mid, lol n) {
//     lol s = 0;
//     lol nn = n;
//     while(n>0) {
//         if(n>=mid) {
//             n-=mid; s+=mid;
//         }else {
//             s+=n; n=0;
//         }
//         n -= n/10;
//     }
//     return s*2>=nn;
// }
//
// void solve() {
//     lol n; cin>>n;
//     lol l = 1; lol e = n;
//     lol ans = n;
//     while(l<=e) {
//         lol mid = (l+e)/2;
//         if(check(mid, n)) {
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
//     fast; solve();
// }