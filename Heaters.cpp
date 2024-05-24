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
//     lol n; lol k; cin>>n>>k;
//     vector<lol>arr(n); for(lol i=0;i<n;i++) cin>>arr[i];
//     vector<lol>x(n);
//     lol i = 0; lol j = 0;
//     bool flag = true;
//     while(j<n) {
//         while(j<n and arr[j]!=1) {
//             j++;
//         }
//         if(j>=n) {
//             flag = false; break;
//         }
//         if(j-k+1>=0 and i<j-k+1 and x[i]==0) {
//             flag = false; break;
//         }else if(i>max(j-k+1,(lol)(0))) {
//             i = max(j-k+1,(lol)(0));
//         }
//         while(i<=j+k-1 and i<n) {
//             // if(x[i]==0) {
//             //     x[i] = heater;
//             // }else {
//             //     x[i] = -1;
//             // }
//             x[i]++;
//             i++;
//         }
//     }
//         for(lol i=0;i<n;i++) {
//             if(x[i]==0) {
//                 noo; return;
//             }
//         }
//         // for(lol i: x) {
//         // cout<<i<<" ";
//         // }cout<<endl;
//         // j++;
//         for(lol i=0;i<n;i++) {
//             bool f = true;
//             if(arr[i]) {
//                 for(lol j = max(0,i-r+1); j<min(n,i+r); ++j) {
//                     if(x[i]==1) {
//                         f = false; break;
//                     }
//                 }
//             }
//             if(f and arr[i]) {
//                 k--;
//                 for(lol j = max(0,i-k+1); j<min(n,i+r); ++j) {
//                     x[j]--;
//                 }
//             }
//         }
//
//
//     // set<lol>xx;
//     // for(lol i=0;i<n;i++) {
//     //     if(x[i]==0) {
//     //         flag = false; break;
//     //     }else if(x[i]>0){
//     //         xx.insert(x[i]);
//     //     }
//     // }
//     // if(flag) {
//         cout<<k<<endl;
//     // }else {
//         // cout<<-1<<endl;
//     // }
// }
//
// int main() {
//     fast; solve();
// }