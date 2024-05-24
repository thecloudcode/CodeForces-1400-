// /* Badal Prasad Singh */
//
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false)
// #define lol long long int
//
// void solve() {
//     string a; string x; cin>>a; cin>>x;
//     unordered_map<string, lol>m;
//     unordered_map<string, lol>n;
//     for(char i: a) {
//         string xx(1,i);
//         if(i=='6' or i=='9') m["69"]++;
//         else if(i=='2' or i=='5') m["25"]++;
//         else m[xx]++;
//     }
//     for(char i: x) {
//         string xx(1,i);
//         if(i=='6' or i=='9') n["69"]++;
//         else if(i=='2' or i=='5') n["25"]++;
//         else n[xx]++;
//     }
//     lol ans = INT_MAX;
//     for(const auto&pair: m) {
//         ans=min(n[pair.first]/m[pair.first], ans);
//     }
//     cout<<ans<<endl;
// }
//
// int main() {
//     fast; solve();
// }