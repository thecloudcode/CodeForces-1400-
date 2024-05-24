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
//     lol a,b,f,k; cin>>a>>b>>f>>k;
//     lol ans = 0;
//     bool flag = true;
//     lol x = 0;
//     lol fuel = b;
//     while(k and flag) {
//         if(x==0) {
//             if(fuel>=f-x) {
//                 fuel-=f-x;
//                 x = f;
//             }else {
//                 flag = false;
//                 break;
//             }
//         }
//         if(x==f) {
//             if(k==1) {
//                 if(fuel>=a-x) {
//                     k--; x = a; fuel-=a-x;
//                 }else if(fuel<a-x and b>=a-x) {
//                     k--; x = a; fuel=b-a-x; ans++;
//                 }else {
//                     flag = false;
//                 }
//                 break;
//             }else {
//                 if(fuel>=2*(a-x)) {
//                     fuel-=2*(a-x); k--;
//                 }else if(fuel<2*(a-x) and b>=2*(a-x)) {
//                     fuel = b-2*(a-x); ans++; k--;
//                 }else {
//                     flag = false;
//                     break;
//                 }
//             }
//
//             if(k==1) {
//                 if(fuel>=f) {
//                     k--;
//                 }else if(fuel<f and b>=f) {
//                     k--; ans++;
//                 }else {
//                     flag = false;
//                 }
//                 break;
//             }else {
//                 if(fuel<2*f and b>=2*f) {
//                     fuel = b-f; ans++;
//                     x = 0; k--;
//                 }else if(fuel>=2*f){
//                     fuel-=f; x = 0; k--;
//                 }else {
//                     flag = false;
//                 }
//             }
//         }
//     }
//     if(flag and k<=0) {
//         anz;
//     }
//     else noo;
// }
//
// int main() {
//     fast; solve();
// }