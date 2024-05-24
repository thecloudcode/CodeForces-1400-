// /* Badal Prasad Singh */
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false)
// #define lol long long int
//
// bool check(lol mid, vector<lol>x, lol c, lol d) {
//     lol s = 0;
//     for(lol i=0;i<d;i++) {
//         if(i%(mid+1)<x.size()) {
//             s += x[i%(mid+1)];
//         }
//     }
//     // for(lol i: x) {
//     //     lol xx = ceil((double)(d)/(double)(mid+1));
//     //     s += xx*i;
//     //     d -= 1;
//     //     if(d<=0) {
//     //         break;
//     //     }
//     // }
//     return s>=c;
// }
//
// void solve() {
//     lol n; lol c; lol d; cin>>n>>c>>d;
//     vector<lol>x(n);
//     lol s = 0;
//     for(lol i=0;i<n;i++) {
//         cin>>x[i];
//     }
//     sort(x.begin(), x.end(), greater<lol>());
//
//     for(lol i=0;i<min(d,n);i++) {
//         s+=x[i];
//     }
//
//     if(s>=c) {
//         cout<<"Infinity"<<endl; return;
//     }
//     lol l = 0; lol e = 1e6;
//     lol ans = INT_MIN;
//     while(l<=e) {
//         lol mid = (l+e)/2;
//         if(check(mid, x, c, d)) {
//             ans = max(ans, mid);
//             l = mid+1;
//         }else {
//             e = mid-1;
//         }
//     }
//     if(ans<0) {
//         cout<<"Impossible"<<endl;
//     }else {
//         cout<<ans<<endl;
//     }
// }
//
// int main() {
//     fast;
//     lol t; cin>>t;
//     while(t--) {
//         solve();
//     }
// }