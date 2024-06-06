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
// const int MOD = 1000000007;
//
// void solve() {
//     string x; cin>>x;
//     bool flag = true;
//     lol ans = 1; char last=' '; lol c = 0;
//     for(char i: x) {
//         if(i=='m') flag = false;
//         if(i=='w') flag = false;
//         if(c==2 and last!=i) {
//             ans*=2;c=0;
//         }
//         else if(c>2 and last!=i) {
//             ans*=(c-2)*2+1;
//             c=0;
//         }else if(c==1 and last!=i) c=0;
//         if(i=='u')c++;
//         if(i=='n')c++;
//         last=i;
//         // ans%=;
//     }
//     if(c>2)ans*=(c-2)*2+1; else if(c==2)ans*=2;
//     if(flag) {cout<<ans%MOD<<endl;} else cout<<"0"<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }
