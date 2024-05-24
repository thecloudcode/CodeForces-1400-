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
//     lol n; lol m; cin>>n>>m;
//     vector<lol>x(n); vector<lol>k(m+1);
//     for(lol i=0;i<n;i++) {
//         cin>>x[i];
//     }
//     for(lol i=1;i<=m;i++) cin>>k[i];
//     bool flag = false;
//     for(lol i=0;i<n;i++) {
//         unordered_map<lol, lol>map;
//         for(lol j=i;j<n;j++) {
//             map[x[j]]++;
//             lol c = 0;
//             for(lol kk=1;kk<=m;kk++) {
//                 if(map[kk]==k[kk]) {
//                     c++;
//                 }
//             }
//             if(c==m) {
//                 flag = true;
//                 // break;
//             }
//         }
//     }
//     if(flag) {
//         yes;
//     }else no;
// }
// int main() {
//     fast; solve();
// }