// /* Badal Prasad Singh */
//
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false)
// #define lol long long int
// // str.find(ch) != std::string::npos
//
// bool containschar(const string &s, char c) {
//     return s.find(c) != string::npos;
// }
//
// void solve() {
//     string x; cin>>x;
//     string ans = "";
//     if(x.size()<3) {
//         cout<<x<<endl;
//         return;
//     }
//     int n = x.size();
//     string v = "aeiou";
//     int i;
//
//     for(i=0;i<n-2;i++) {
//
//         if(not (containschar(v, x[i])) and not (containschar(v, x[i+1])) and not (containschar(v, x[i+2]))) {
//             if(x[i]!=x[i+1] or x[i+1]!=x[i+2] or x[i]!=x[i+2]) {
//
//                 ans+=x[i];
//                 ans+=x[i+1];
//                 ans+=" ";
//                 i++;
//             }else {
//                 ans+=x[i];
//             }
//         }else {
//             ans+=x[i];
//         }
//     }
//     for(int j=i;j<n;j++) {
//         ans+=x[j];
//     }
//     cout<<ans<<endl;
// }
//
// int main() {
//     fast; solve();
// }