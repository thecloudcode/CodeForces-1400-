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
// struct Compare {
//     bool operator()(const pair<lol, lol>& a, const pair<lol, lol>& b) const {
//         return a.first > b.first;
//     }
// };
//
// void solve() {
//     lol n, k; cin>>n>>k;
//     vector<lol>arr(n);
//     for(lol i=0;i<n;i++) cin>>arr[i];
//
//     multiset<pair<lol,lol>, Compare>x;
//     for(lol i=0;i<k;i++) {
//         x.insert({arr[i],i+1});
//     }
//
//     vector<lol>xx(n);
//     lol ans = 0;
//     lol ind = k;
//     for(lol i=0;i<n;i++) {
//         if(i+k<n) {
//             x.insert({arr[i+k],i+k+1});
//         }
//         auto it = x.begin();
//         ans += (it->first)*(abs(++ind-(it->second)));
//         xx[it->second-1]=ind;
//         x.erase(it);
//     }
//     cout<<ans<<endl;
//     for(lol i: xx) cout<<i<<" ";
//     cout<<endl;
// }
//
// int main() {
//     fast; solve();
// }