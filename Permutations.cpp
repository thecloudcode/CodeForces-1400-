// /* Badal Prasad Singh */
//
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false)
// #define lol long long int
//
// void solve() {
//     lol n; cin>>n;
//     vector<lol>x(n);
//     for(lol i=0;i<n;i++) cin>>x[i];
//     unordered_map<lol,lol>map;
//     lol maxx = INT_MIN;
//     vector<lol>ans;
//     for(lol i: x) {
//         map[i]++;
//         ans.push_back(map[i]);
//         maxx = max(maxx, map[i]);
//     }
//     bool flag = true;
//     for(lol i=1;i<=1e5;i++) {
//         if(map[i]<map[i+1]) flag = false;
//     }
//     if(flag==false) {
//         cout<<-1<<endl;
//         return;
//     }
//     cout<<maxx<<endl;
//     for(lol i=0;i<n;i++) {
//         if(i==n-1) cout<<ans[i]<<endl;
//         else cout<<ans[i]<<" ";
//     }
// }
//
// int main() {
//     fast; solve();
// }