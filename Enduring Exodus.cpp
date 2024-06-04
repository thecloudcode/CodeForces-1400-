//  /* Badal Prasad Singh */
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
// lol f(lol i, lol j, string x, lol k) {
//     if(k==2) return j-i;
//     lol ans = INT_MAX;
//     for(lol k=i+1;k<j;k++) {
//         if(x[k]=='0') ans = min(ans, max(k-i, j-k));
//     }
//     return ans;
// }
//
// void solve() {
//     lol n, k; cin>>n>>k; k++;
//     string x; cin>>x;
//     lol i = 0, j = 0, z = 0; lol ans = INT_MAX;
//     while(j<n) {
//         if(x[j]=='0') z++;
//         if(z==k) {
//             while(x[i]=='1')i++;
//             ans = min(ans, f(i,j,x,k));
//         }
//         while(z>=k and i<=j) {
//             if(x[i]=='0') z--;
//             i++;
//         }
//         j++;
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
