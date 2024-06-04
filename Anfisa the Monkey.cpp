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
//     lol a, b, c; cin>>a>>b>>c;
//     string x;cin>>x;
//     double kk = (double)(x.size())/a;
//     lol k = x.size()/a;
//     lol r = x.size() - k*a;
//     // cout<<k<<" "<<r<<" "<<kk<<endl;
//     if(kk>=b and kk<=c) {
//         int ind = 0;
//         for(int j=0;j<a;j++) {
//             for(int i=0;i<k;i++) {
//                 cout<<x[ind++];
//             }if(r>0) {
//                 cout<<x[ind++];r--;
//             }
//             cout<<endl;
//         }
//     }else {
//         cout<<"No solution"<<endl;
//     }
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }
