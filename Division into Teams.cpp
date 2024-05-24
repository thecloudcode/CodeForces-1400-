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
//     vector<pair<lol,lol>>x;
//     for(lol i=0;i<n;i++) {
//         lol z; cin>>z;
//         x.push_back(make_pair(z, i+1));
//     }
//     sort(x.begin(), x.end());
//
//     vector<lol>a; vector<lol>b;
//     bool flag = true;
//     for(lol i=0;i<n;i++) {
//         if(flag) {
//             a.push_back(x[i].second);
//             flag = false;
//         }else {
//             b.push_back(x[i].second);
//             flag = true;
//         }
//     }
//     cout<<a.size()<<endl;
//     for(lol i: a){ cout<<i<<" "; } cout<<endl;
//     cout<<b.size()<<endl;
//     for(lol i: b){ cout<<i<<" "; }
//     cout<<endl;
// }
//
// int main(){
//     fast; solve();
// }