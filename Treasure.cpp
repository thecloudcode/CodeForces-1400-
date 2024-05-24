// /* Badal Prasad Singh */
//
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false)
// #define lol long long int
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
//
// void solve() {
//     string s; cin>>s; lol x = 0;
//     bool flag = true;
//     vector<lol>ans;
//     for(char i: s) {
//         if(i=='(') x++;
//         if(i==')') x--;
//         if(i=='#') {
//             if(x>0) {
//                 ans.push_back(1);
//                 x--;
//             }else {
//                 flag = false;
//             }
//         }
//         if(x<0) flag = false;
//     }
//     if(x>0) {
//         if(ans.size()>0) {
//             ans[ans.size()-1] += x;
//         }else {
//             flag = false;
//         }
//     }
//     x = 0; lol ind = 0;
//     if(flag) {
//         for(char i: s) {
//             if(i=='(') x++;
//             if(i==')') x--;
//             if(i=='#') {
//                 x-=ans[ind++];
//             }
//             if(x<0) flag = false;
//         }
//     }
//     if(x>0) flag = false;
//     if(x<0 or flag == false) {
//         cout<<-1<<endl;
//     }else {
//         for(lol i: ans) {
//             cout<<i<<endl;
//         }
//     }
// }
// int main() {
//     fast; solve();
// }