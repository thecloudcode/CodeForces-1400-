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
// // bool f(vector<string>&x, lol i, lol j) {
// //     if(x[i][j]=='W') return false;
// //     if(j==x[0].size()-1 and x[i][j]=='B') return true;
// //     if(i==0) return f(x,0,j+1) or f(x,1,j);
// //     if(i==1) return f(x,1,j+1) or f(x,0,j);
// // }
//
// void solve() {
//     lol n; cin>>n;
//     // vector<string>x;
//     string a; string b; cin>>a>>b;
//     lol last = -1; bool flag = true;
//
//     for(lol j=0;j<n;j++) {
//         if(a[j]=='B' and b[j]=='B' and last==-1) continue;
//         if(a[j]=='B' and b[j]=='B') {
//             last=last==1?2:1;
//         }else if(a[j]=='B') {
//             if(last==2) {
//                 flag = false; break;
//             }else if(last==-1) {
//                 last = 1;
//             }
//         }else if(b[j]=='B') {
//             if(last==1) {
//                 flag = false; break;
//             }else if(last==-1) {
//                 last = 2;
//             }
//         }else {
//             flag = false; break;
//         }
//     }
//     if(flag){ yes;} else no;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     cin >> t;
//     while (t--) solve();
// }
