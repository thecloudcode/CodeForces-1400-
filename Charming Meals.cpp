// /* Badal Prasad Singh */
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false)
// #define lol long long int
//
// void solve() {
//     lol n; cin>>n;
//     vector<lol>a(n);
//     vector<lol>b(n);
//     for(lol i=0;i<n;i++) {
//         cin>>a[i];
//     }
//     for(lol i=0;i<n;i++) {
//         cin>>b[i];
//     }
//
//     sort(a.begin(), a.end());
//     sort(b.begin(), b.end());
//     lol ans = 0;
//     lol ind = 0;
//     for(lol j: b) {
//         lol minn = INT_MAX;
//         for(lol i: a) {
//             minn = min(minn, abs(b[ind]-i));
//             ind++;
//             if(ind>=n) {
//                 ind = 0;
//             }
//         }
//         ind++;
//         ans = max(ans, minn);
//     }
//     cout<<ans<<endl;
// }
//
// int main() {
//     fast;
//     lol t; cin>>t; while(t--){
//     solve();
//     }
// }
