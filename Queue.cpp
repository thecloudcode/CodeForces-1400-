// /* Badal Prasad Singh */
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false)
// #define lol long long int
//
// void solve() {
//     lol n; cin>>n;
//     vector<lol>x(n);
//     for(lol i=0;i<n;i++) {
//         cin>>x[i];
//     }
//     lol minn = INT_MAX;
//     lol ind = -1;
//     vector<lol>ans;
//     for(lol i=n-1;i>=0;i--) {
//         if(x[i]<=minn) {
//             ans.push_back(-1);
//             minn = x[i];
//             ind = max(ind, i);
//         }else {
//             ans.push_back(ind-1-i);
//         }
//     }
//     for(lol i=n-1; i>=0; i--) {
//         cout<<ans[i]<<" ";
//     }cout<<endl;
// }
//
// int main() {
//     fast;solve();
// }