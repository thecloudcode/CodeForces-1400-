// #include <bits/stdc++.h>
// using namespace std;
//
// #define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
// #define lol long long int
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// #define noo cout<<-1<<endl;
// #define anz cout<<ans<<endl;
//
// void solve() {
//     lol n; cin>>n;
//     vector<lol>x(n);
//     for(lol i=0;i<n;i++) {
//         cin>>x[i];
//     }
//     lol ans = 0;
//     lol i = 1;
//     lol last = 0;
//     while(i<n) {
//         lol a = 0; lol b = 0; lol c = 0; lol d = 0;
//         a = x[i-1]*i+x[i]*(i+1);
//         b = x[i-1]*(i+1)+x[i]*i;
//         if(i+1<n) c = x[i]*(i+1)+x[i+1]*(i+2);
//         if(i+1<n) d = x[i]*(i+2)+x[i+1]*(i+1);
//         cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
//         if(a>=b and a>=c and a>=d) {
//             ans+=a;
//             last = i;
//             i++;
//         }else if(b>=a and b>=c and b>=d) {
//             ans+=b;
//             last = i;
//             i+=2;
//         }else if(c>=a and c>=b and c>=d) {
//             ans+=x[i-1]*i;
//             ans+=c;
//             last = i+1;
//             i+=3;
//         }else if(d>=a and d>=b and d>=c) {
//             ans+=x[i-1]*i;
//             ans+=d;
//             last = i+1;
//             i+=3;
//         }
//     }
//     for(lol j=last+1; j<n;j++) {
//     ans+=x[j]*(j+1);
//     }
//     cout<<ans<<endl;
// }
//
// int main() {
//     fast; solve();
// }