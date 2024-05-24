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
// unordered_map<lol, lol>mapp;
// unordered_map<lol, lol>f;
//
// void solve(){
//     lol t; lol k; cin>>t>>k;
//     vector<lol>x(k);
//     lol ii = 0;
//     while(t--) {
//         string sx; lol a; cin>>sx;
//         if(sx=="alloc") {
//             cin>>a;
//             bool flag = false;
//             for(lol i=0;i<=k-a;i++) {
//                 if(x[i]==0) {
//                     flag = true;
//                     for(lol j=i;j<i+a;j++) {
//                         if(x[j]!=0) {
//                             flag = false;
//                             break;
//                         }
//                     }
//                     if(flag) {
//                         ++ii;
//                         for(lol j=i;j<i+a;j++) {
//                             x[j]=ii;
//                         }
//                         cout<<ii<<endl;
//                         break;
//                     }
//                 }
//             }
//             if(flag==false) {
//                 cout<<"NULL"<<endl;
//             }
//         }else if(sx=="erase") {
//             cin>>a;
//             bool flag = false;
//             for(lol i=0;i<k;i++) {
//                 if(x[i]==a) {
//                     flag = true;
//                     x[i]=0;
//                 }
//             }
//             if(flag==false or a<1) {
//                 cout<<"ILLEGAL_ERASE_ARGUMENT"<<endl;
//             }
//         }else if(sx=="defragment"){
//             vector<lol>xx(k);
//             lol ind = 0;
//             for(lol i:x) {
//                 if(i>0) {
//                     xx[ind++]=i;
//                 }
//             }
//             x=xx;
//         }
//     }
// }
//
// int main() {
//     fast; solve();
// }