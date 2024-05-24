// /* Badal Prasad Singh */
// #include<bits/stdc++.h>
// using namespace std;
// #define fast  ios_base::sync_with_stdio(false)
// #define lol long long int
//
// bool check(lol z, vector<lol>x, lol n, lol k) {
//     lol s = 0;
//     for(lol i=floor(n/2);i<n;i++) {
//         if(x[i]<z) {
//             s += z-x[i];
//         }else {
//             break;
//         }
//     }
//     return s<=k;
// }
//
// void solve() {
//     lol n; lol k; cin>>n>>k;
//     vector<lol>x(n);
//     for(lol i=0;i<n;i++) {
//         cin>>x[i];
//     }
//
//     sort(x.begin(), x.end());
//     lol ans = 0;
//     lol l=1; lol r=1e10;
//     while(l<=r) {
//         lol mid = (l+r)/2;
//         if(check(mid, x, n, k)) {
//             ans = max(mid, ans);
//             l = mid + 1;
//         }else {
//             r = mid - 1;
//         }
//     }
//     cout<<ans<<endl;
//
// }
//
// int main() {
//     fast; solve();
// }