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
//     lol n; lol k; lol l; cin>>n>>k>>l;
//     vector<lol>x(n*k);
//     for(lol i=0;i<n*k;i++) cin>>x[i];
//     sort(x.begin(), x.end());
//     lol s = 0;
//     vector<lol>xx;
//     lol ind = 0;
//     for(lol i=0;i<n;i++) {
//         if(x[i]-x[0]<=l) {
//             ind = i;
//         }else{ break; }
//     }
//     if(maxx-minn>l) {
//         cout<<0<<endl;
//     }else {
//         cout<<s<<endl;
//     }
// }
//
// int main() {
//     fast; solve();
// }