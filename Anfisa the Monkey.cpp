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
//
// void solve() {
//     lol a; lol b; lol c; cin>>a>>b>>c;
//     string x; cin>>x;
//     double n = x.size();
//     lol i; lol j=0;
//     bool flag = true;
//     if(ceil(n/a)>=b and ceil(n/a)<=c) {
//         for(i = ceil(n/a);i<=n;i+=ceil(n/a)) {
//             for(;j<i;j++) {
//                 cout<<x[j];
//             }cout<<endl;
//         }
//     }else if(floor(n/a)>=b and floor(n/a)<=c) {
//         for(i = floor(n/a);i<=n;i+=floor(n/a)) {
//             for(;j<i;j++) {
//                 cout<<x[j];
//             }cout<<endl;
//         }
//     }else {
//         flag = false;
//     }
//     if(flag) {
//         for(j;j<n;j++) {
//             cout<<x[j];
//         }cout<<endl;
//     }else {
//         cout<<"No solution"<<endl;
//     }
//
// }
//
// int main() {
//     fast; solve();}