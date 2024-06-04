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
// void solve() {
//     string x; cin>>x;
//     lol n = x.size();
//     lol ans = 0;
//     for(lol i=n-1;i>=1;i--) {
//         if((x[i]-'0')%4==0) ans++;
//         lol l = (x[i-1]-'0')*10 + (x[i]-'0');
//         if(l%4==0) {
//             ans+=i;
//         }
//     }
//     if((x[0]-'0')%4==0) ans++;
//     cout<<ans<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }
