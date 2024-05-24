// /* Badal Prasad Singh */
// #include <bits/stdc++.h>
// using namespace std;
//
// #define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define lol long long int
//
// bool check(lol mid, lol n, lol m, lol k) {
//     m-=n; mid--;
//     lol midd = mid;
//     m-=mid;
//     if(m<0) return false;
//     for(lol i=k+1; i<=n; i++) {
//         m-=--mid;
//         if(m<0) return false;
//         if(mid<=1) break;
//     }
//     for(lol i=k-1; i>=1; i--) {
//         m-=--midd;
//         if(m<0) return false;
//         if(midd<=1) break;
//     }
//     if(m<0) return false;
//     return true;
// }
//
// void solve() {
//     lol n; lol m; lol k; cin>>n>>m>>k;
//     lol l = 0; lol e = 1e10;
//     lol ans = INT_MIN;
//     while(l<=e) {
//         lol mid = (l+e)/2;
//         if(check(mid, n, m, k)) {
//             l = mid+1;
//             ans = max(ans, mid);
//         }else {
//             e = mid-1;
//         }
//     }
//     cout<<ans<<endl;
// }
//
// int main() {
//     fast; solve();
// }