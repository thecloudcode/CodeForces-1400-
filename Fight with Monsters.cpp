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
//     lol n; lol k; lol a; lol b; cin>>n>>a>>b>>k;
//     vector<lol>x(n);
//     for(lol i=0;i<n;i++) cin>>x[i];
//     vector<lol>xx(n);
//     for(lol i=0;i<n;i++) {
//         double y = x[i]%(a+b);
//         if(y==0) y = a+b;
//         xx[i] = max(0.0,ceil(y/a)-1);
//     }
//     sort(xx.begin(), xx.end());
//     lol ans = 0;
//     for(lol i: xx) {
//         k-=i;
//         if(k>=0) {
//             ans++;
//         }else {
//             break;
//         }
//     }
//     anz;
// }
//
// int main() {
//     fast; solve();
// }