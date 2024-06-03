// /* Badal Prasad Singh */
//
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define lol long long int
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// #define noo cout<<-1<<endl;
// #define anz cout<<ans<<endl;
//
// void solve() {
//     lol a; lol b; cin>>a>>b;
//     lol g = gcd(a,b);
//     vector<lol>x;
//     for(lol i=1;i*i<=g;i++) {
//         if(g%i==0) {
//             x.push_back(i);
//             x.push_back(g/i);
//         }
//     }
//     sort(x.begin(), x.end());
//     lol t; cin>>t;
//     while(t--) {
//         lol l; lol r; cin>>l>>r;
//         lol s = 0; lol e = x.size()-1;
//         lol ans = -1;
//         while(s<=e) {
//             lol mid = (s+e)/2;
//             if(x[mid]<=r) {
//                 ans = max(ans, x[mid]);
//                 s = mid+1;
//             }else {
//                 e = mid-1;
//             }
//         }
//         if(ans>=l) cout<<ans<<endl; else cout<<-1<<endl;
//     }
// }
//
// int main() {
//     fast; solve();
// }