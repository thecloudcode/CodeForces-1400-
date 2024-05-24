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
// void solve(){
//     string n; lol s; cin>>n>>s; lol x = 1;
//     lol nn = 0;
//     for(char i: n) {
//         nn += nn*10+(i-'0');
//         if(s-(i-'0')>0) {
//             x+=x*10+(i-'0');
//         }else {
//             x*=10;
//         }
//     }
//     cout<<x<<" "<<nn<<endl;
//     cout<<x-nn<<endl;
// }
//
// int main() {
//     fast; lol t; cin>>t;
//     while(t--) {
//         solve();
//     }
// }