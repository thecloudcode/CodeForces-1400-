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
//     lol n; cin>>n;
//     vector<lol>x(n);
//     lol a=0, b=0, c=0, d=0;
//     lol zero = 0;
//     for(lol i=0;i<n;i++) {
//         cin>>x[i];
//     }
//     for(lol i=0;i<n;i++) {
//         if(x[i]>0) {
//             d++;
//         }else if(x[i]<0) {
//             c++;
//         }else {
//             zero++;
//         }
//     }
//     lol ans = INT_MAX;
//     for(lol i=0;i<n;i++) {
//         if(x[i]<0) {
//             c--;
//             ans = min(ans, c+b);
//             a++;
//         }else if(x[i]>0){
//             d--;
//             ans = min(ans, b+c);
//             b++;
//         }
//     }
//     cout<<ans+zero<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }
