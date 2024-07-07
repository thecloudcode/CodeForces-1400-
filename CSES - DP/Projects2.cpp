// /* Badal Prasad Singh */
//
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define yes cout<<"YES"<<endl;
// #define lol long long int
// #define no cout<<"NO"<<endl;
// #define noo cout<<-1<<endl;
// #define anz cout<<ans<<endl;
//
// lol f(lol i, vector<vector<lol>>&x) {
//     lol ans = 0;
//     for(lol j=i+1;j<x.size();j++) {
//         if(i==-1 or x[j][0] > x[i][1]) ans = max(ans, x[j][2] + f(j,x));
//     }
//     return ans;
// }
//
// void solve() {
//     lol n; cin>>n; vector<vector<lol>>x;
//     for(lol i=0;i<n;i++) {
//        vector<lol>xx(3);
//         cin>>xx[0]>>xx[1]>>xx[2];
//         x.push_back(xx);
//     }
//     cout<<f(-1,x)<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }
