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
// void cal(vector<lol>x){
//
// }
//
// void solve() {
//     lol n; cin>>n;
//     vector<lol>x(n);
//     for(lol i=0;i<n;i++) cin>>x[i];
//     unordered_map<lol, bool>mapp;
//     for(lol i=0;i<n;i++) {
//         lol s = x[i];
//         for(lol j=i+1;j<n;j++) {
//             s+=x[j];
//             if(s>n) {
//                 break;
//             }
//             mapp[s] = true;
//         }
//     }
//     lol c = 0;
//     for(lol i: x) {
//         if(mapp[i]) c++;
//     }
//     cout<<c<<endl;
// }
//
// int main() {
//     fast; lol t; cin>>t;
//     while(t--) {
//         solve();
//     }
// }