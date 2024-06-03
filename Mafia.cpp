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
// bool check(lol k, vector<lol>x) {
//     lol s = 0;
//     for(lol i: x) {
//         if(i>k) return false;
//         s+=k-i;
//     }
//     return s>=k;
// }
//
// void solve() {
//     lol n; cin>>n;
//     vector<lol>x(n);
//     for(lol i=0;i<n;i++) cin>>x[i];
//     sort(x.begin(), x.end());
//     lol s = 1; lol e = 1e10+1;
//     lol ans = INT_MAX;
//     while(s<=e) {
//         lol mid = (s+e)/2;
//         if(check(mid, x)) {
//             ans = min(ans, mid);
//             e = mid - 1;
//         }else {
//             s = mid + 1;
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
