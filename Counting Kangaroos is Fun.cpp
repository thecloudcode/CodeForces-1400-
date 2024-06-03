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
//     for(lol i=0;i<n;i++) cin>>x[i];
//     sort(x.begin(), x.end());
//
//     lol c = 0;
//     lol k = 0;
//     for(lol i=0;i<n-1;i++) {
//         if(2*x[k]<=x[i+1]) {
//             c++;
//             k++;
//         }
//     }
//     cout<<n-min(c, n/2)<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }
