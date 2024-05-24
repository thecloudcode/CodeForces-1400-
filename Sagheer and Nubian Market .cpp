// /* Badal Prasad Singh */
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false)
// #define lol long long int
//
//
// long long int check(lol mid, vector<lol>x, lol n, lol k) {
//     lol s = 0;
//     vector<lol>y(n);
//     for(lol i=0;i<n;i++) {
//         y[i] = x[i]+(i+1)*(mid);
//     }
//     sort(y.begin(), y.end());
//     for(lol i=0;i<mid;i++) {
//         s+=y[i];
//     }
//     return s;
// }
//
// void solve() {
//     lol n; lol k; cin>>n>>k;
//     vector<lol>x(n);
//     for(lol i=0;i<n;i++) cin>>x[i];
//
//     lol l = 0; lol e = n;
//     lol ans = INT_MIN;
//     while(l<=e) {
//         lol mid = (l+e)/2;
//         if(check(mid, x, n, k) <= k) {
//             ans = max(ans, mid);
//             l = mid + 1;
//         }else {
//             e = mid - 1;
//         }
//     }
//     lol xx = check(ans, x, n, k);
//     cout<<ans<<" "<<xx<<endl;
// }
//
// int main() {
//     fast; solve();
// }