// /* Badal Prasad Singh */
//
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false)
// #define lol long long int
//
// void solve() {
//     lol n; lol m; cin>>n>>m;
//     vector<lol>x(n);
//     for(int i=0;i<n;i++) cin>>x[i];
//     sort(x.begin(), x.end());
//     // 2 3 4 4 6 6 7 8 19
//     vector<lol>ans(n);
//
//     lol s = 0;
//     for(lol i=0;i<n;i++) {
//         s+=x[i];
//         ans[i]=s;
//
//         if(i>=m) {
//             ans[i] += ans[i-m];
//         }
//     }
//
//     for(lol i: ans) {
//         cout<<i<<" ";
//     }cout<<endl;
// }
//
