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
//
// void solve() {
//     lol n, k, q; cin>>n>>k>>q;
//     vector<double>a(k+1); vector<double>b(k+1); a[0] = 0; b[0] = 0;
//     for(lol i=1;i<=k;i++) {
//         cin>>a[i];
//     }
//     for(lol i=1;i<=k;i++) {
//         cin>>b[i];
//     }
//     vector<lol>ans;
//     while(q--) {
//         double d; cin>>d;
//         lol l = 0; lol e = k;
//         if(d==a[k]) {
//             ans.push_back(b[k]); continue;
//         }
//         while(l<=e) {
//             lol mid = (l + e)/2;
//             if(a[mid] > d) {
//                 e = mid - 1;
//             }else {
//                 l = mid + 1;
//             }
//         }
//         lol res = b[e] + (d-a[e])*(b[e+1]-b[e])/(a[e+1]-a[e]);;
//         ans.push_back(res);
//     }
//     for(lol i: ans) {
//         cout<<i<<" ";
//     }cout<<endl;
// }
//
// int main() {
//     lol t; cin>>t; while(t--) {
//         solve();
//     }
// }