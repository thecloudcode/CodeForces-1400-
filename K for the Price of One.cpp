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
//     lol n, p, k; cin>>n>>p>>k;
//     vector<lol>x(n); for(lol i=0;i<n;i++) cin>>x[i];
//     sort(x.begin(), x.end());
//     lol ans1 = x[0]; lol ans2 = 0;
//     lol i = 2; lol j = 1;
//     lol c = 0; lol cc = 0;
//     while(ans) {
//         ans1+=x[i]; i+=2; c+=2;
//     }
//     while(j<n) {
//         ans2+=x[j]; j+=2;cc+=2;
//     }
//     cout<<max(c,cc)<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     cin >> t;
//     while (t--) solve();
// }
