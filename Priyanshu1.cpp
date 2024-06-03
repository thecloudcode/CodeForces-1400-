// /* Badal Prasad Singh */
//
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// #define noo cout<<-1<<endl;
// #define anz cout<<ans<<endl;
//
// void solve() {
//     long long n; cin>>n;
//     vector<long long>x(n);
//     for(long long i=0;i<n;i++) cin>>x[i];
//     sort(x.begin(), x.end());
//
//     long long maxx = 0; long long i = 0; long long j = n-1;
//     bool flag = true;
//     while(i<j) {
//         maxx += abs(x[j]-x[i]);
//         if(flag) {
//             i++; flag=false;
//         }else {
//             j--; flag=true;
//         }
//     }
//     long long minx = 0;
//     for(long long i=0;i<n-1;i++) {
//         minx+=x[i+1]-x[i];
//     }
//     cout<<minx<<" "<<maxx<<endl;
// }
//
// int main() {
//     solve();
// }