// #include <bits/stdc++.h>
// using namespace std;
//
// #define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define lol long long int
//
// void solve() {
//     lol n; lol k;
//     cin>>n>>k;
//     vector<lol> x(n);
//     for(lol i=0;i<n;i++) {
//         cin>>x[i];
//     }
//     sort(x.begin(), x.end());
//     if(ceil(n/2)>k) {
//         cout<<-1<<endl;
//     }else if(k>=n){
//         cout<<x[n-1]<<endl;
//     }else {
//         lol ans = x[n-1];
//         lol i = n-1;
//         while(i+1<2*k) {
//             ans = max(ans, x[i]);
//             i--;
//             k--;
//         }
//         for(int j=0;j<k;j++) {
//             ans = max(ans, x[i]+x[j]);
//             i--;
//         }
//         cout<<ans<<endl;
//     }
//
// }
//
// int main() {
//     fast;
//     solve();
// }