// /* Badal Prasad Singh */
//
// #include <bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define yes cout << "YES" << endl;
// #define lol long long int
// #define no cout << "NO" << endl;
// #define noo cout << -1 << endl;
// #define anz cout << ans << endl;
//
// void solve() {
//     lol n, k; cin >> n >> k;
//     string x; cin >> x;
//     lol c = 0;
//     if(n==2) {
//         if(x[0]==x[1]) {
//             if(x[0]=='A') x[0]='B'; else x[0]='A';
//             cout<<1<<endl;
//             cout<<x<<endl;
//             return;
//         }
//     }
//     if(k==2) {
//         for(lol i=1;i<x.size();i++) {
//             if(x[i]==x[i-1]) {
//                 if(x[i]=='A') x[i]='B'; else x[i]='A';
//                 c++;
//             }
//         }
//         cout<<c<<endl;
//         cout<<x<<endl;
//         return;
//     }
//     for (lol i = 1; i < n - 1; i++) {
//         if (x[i - 1] == x[i] || x[i] == x[i + 1]) {
//             int a = (int)(x[i - 1]);
//             int b = (int)(x[i + 1]);
//             // cout<<a<<" "<<b<<endl;
//             if (abs(a - b) == 1) {
//                 x[i] = (char)(min(a,b) - 1);
//             } else {
//                 x[i] = (char)(max(a, b) - 1);
//             }
//             if ((int)(x[i]) < 65) {
//                 x[i] = (char)((int)(x[i]) + k);
//             }
//             c++;i++;
//         }
//     }
//
//     cout << c << endl;
//     cout << x << endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }
