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
// bool check(lol k, string x, lol a, lol b, lol c, lol aa, lol bb, lol cc, lol r) {
//     lol aaa = 0; lol bbb = 0; lol ccc = 0;
//     for(char i: x) {
//         if(i=='B') aaa++;
//         if(i=='S') bbb++;
//         if(i=='C') ccc++;
//     }
//     a-=aaa*k; b-=bbb*k; c-=ccc*k;
//     if(a<0) r+=a*aa;
//     if(b<0) r+=b*bb;
//     if(c<0) r+=c*cc;
//     return r>=0;
// }
//
// void solve() {
//     string x; lol a; lol b; lol c; lol aa; lol bb; lol cc; lol r;
//     cin>>x;
//     cin>>a>>b>>c;
//     cin>>aa>>bb>>cc;
//     cin>>r;
//     lol s = 0; lol e = 1e14;
//     lol ans = 0;
//     while(s<=e) {
//         lol mid = (s+e)/2;
//         if(check(mid, x, a, b, c, aa, bb, cc, r)) {
//             ans = max(ans, mid);
//             s = mid+1;
//         }else {
//             e = mid-1;
//         }
//     }
//     cout<<ans<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }
