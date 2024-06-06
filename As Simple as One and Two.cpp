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
// void solve() {
//     string x; cin>>x; lol n = x.size();
//     vector<lol>ans;
//     for(lol i=0;i<n-2;i++) {
//         if(x.substr(i,5)=="twone") {
//             ans.push_back(i+3);
//             i+=4;
//         }else if(x.substr(i,3)=="one" or x.substr(i,3)=="two") {
//             ans.push_back(i+2);
//             i+=2;
//         }
//     }
//     cout<<ans.size()<<endl;
//     for(lol i: ans) {
//         cout<<i<<" ";
//     }cout<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     cin >> t;
//     while (t--) solve();
// }
