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
// string f(string x, lol k) {
//     string r = "";
//     for(lol i=x.size()-1;i>=0;i--) {
//         if(k>0) {
//             r=x[i]+r;
//         }
//         if(x[i]=='a' or x[i]=='e' or x[i]=='i' or x[i]=='o' or x[i]=='u') {
//             k--;
//         }
//     }
//     return r;
// }
//
// void solve() {
//     lol n; lol m; cin>>n>>m; lol nn = n;
//     string aa=""; string bb=""; string cc=""; string dd="";
//     lol aabb = 0; lol abab = 0; lol abba = 0; lol aaaa = 0;
//     while(n--) {
//         string a, b, c, d;
//         cin>>a; aa = f(a, m);
//         cin>>b; bb = f(b, m);
//         cin>>c; cc = f(c, m);
//         cin>>d; dd = f(d, m);
//         // cout<<aa<<bb<<cc<<dd<<endl;
//
//         if(aa==bb and bb==cc and cc==dd) {
//             aaaa++;
//         }else if(aa==bb and cc==dd) {
//             aabb++;
//         }else if(aa==cc and bb==dd) {
//             abab++;
//         }else if(aa==dd and bb==cc) {
//             abba++;
//         }
//     }
//     if(aaaa==nn) {
//         cout<<"aaaa"<<endl;
//     }else if(aabb==nn) {
//         cout<<"aabb"<<endl;
//     }else if(abab==nn) {
//         cout<<"abab"<<endl;
//     }else if(abba==nn) {
//         cout<<"abba"<<endl;
//     }else if((aaaa+aabb)==nn) {
//         cout<<"aabb"<<endl;
//     }else if((aaaa+abba)==nn) {
//         cout<<"abba"<<endl;
//     }else if((abab+aaaa)==nn){
//         cout<<"abab"<<endl;
//     }else{
//         cout<<"NO"<<endl;
//     }
//     // cout<<nn<<endl;
// }
//
// int main() {
//     solve();
// }