// #include <bits/stdc++.h>
// using namespace std;
//
// #define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define lol long long int
//
// bool check(lol mid, vector<lol>x, vector<lol>y, lol k, lol n) {
//     for(lol i=0;i<n;i++) {
//         if(y[i]/x[i]<mid) {
//             if(mid*x[i]>y[i]+k) {
//                 return false;
//             }else {
//                 if(k-mid*x[i]+y[i]>=0) {
//                     k-=mid*x[i]-y[i];
//                 }else {
//                     return false;
//                 }
//             }
//         }
//     }
//     return true;
// }
//
// void solve() {
//     lol n; lol k; cin>>n>>k;
//     vector<lol>x(n);
//     vector<lol>y(n);
//     for(lol i=0;i<n;i++) {
//         cin>>x[i];
//     }
//     for(lol i=0;i<n;i++) {
//         cin>>y[i];
//     }
//     lol l = 0; lol e = 1e10;
//     lol ans = INT_MIN;
//     while(l<=e) {
//         lol mid = (l+e)/2;
//         if(check(mid, x, y, k, n)) {
//             ans = max(ans, mid);
//             l = mid+1;
//         }else {
//             e = mid-1;
//         }
//     }
//     cout<<ans<<endl;
// }
//
// int main() {
//     fast; solve();
// }