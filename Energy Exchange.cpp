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
// unordered_map<double, lol>mapp;
//
// bool check(double mid, double k, vector<double>x) {
//     double extra = 0;
//     double need = 0;
//     for(double i:x) {
//         if(i>mid) {
//             extra += (i-mid)*(100-k)/100;
//         }else if(i<mid) {
//             need += mid-i;
//         }
//     }
//     return extra>=need;
// }
// void solve() {
//     lol n; double k; cin>>n>>k;
//     vector<double>x(n);
//     for(lol i=0;i<n;i++) {
//         cin>>x[i];
//     }
//     double l = 0; double r = 1001;
//     while(l<r) {
//         double mid = (l+r)/2;
//         mapp[mid]++;
//         if(check(mid, k, x)) {
//             l = mid;
//         }else {
//             r = mid;
//         }
//         if(mapp[mid]>2) {
//             break;
//         }
//     }
//     cout<<fixed<<setprecision(9)<<l<<endl;
// }
//
// int main() {
//     fast; solve();
// }