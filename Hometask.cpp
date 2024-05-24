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
// unordered_map<char, char>mapp;
// unordered_map<char, lol>c;
//
// void solve(){
//     string x; cin>>x; lol n = x.size();
//     lol t; cin>>t;
//     while(t--) {
//         string a; cin>>a;
//         mapp[a[0]]=a[1];
//         mapp[a[1]]=a[0];
//     }
//     lol i = 0; lol j = 1;
//     lol ans = 0;
//     while(i<n-1) {
//         lol a = 1; lol b = 0;
//         // cout<<x[i]<<x[j]<<endl;
//         bool flag = false; char first;
//         while(mapp[x[i]]==x[j] or mapp[x[j]]==x[i] or mapp[x[j]]) {
//             if(flag==false) {
//                 first = x[i];
//             }
//             if(x[j]==first) a++;
//             if(x[j]==mapp[first])b++;
//             flag = true;
//             // cout<<x[i]<<x[j]<<a<<b<<first<<endl;
//             if(flag and x[j]!=first and x[j]!=mapp[first]) {
//                 i++;j++;
//                 break;
//             }
//             j++;
//             i++;
//
//         }
//         if(flag) {
//             ans += min(a,b);
//         }else {
//             i++;j++;
//         }
//     }
//     cout<<ans<<endl;
// }
//
// int main() {
//     fast; solve();
// }