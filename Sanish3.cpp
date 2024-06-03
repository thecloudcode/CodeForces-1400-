// #include <bits/stdc++.h>
// using namespace std;
//
// #define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// #define noo cout<<-1<<endl;
// #define anz cout<<ans<<endl;
//
// long long int f(int i, vector<int>x) {
//     if(i==x.size()-1) {
//         return x[i]*(i+1);
//     }else if(i>=x.size()) {
//         return 0;
//     }else {
//         int a = x[i]*(i+1)+x[i+1]*(i+2)+f(i+2, x);
//         int b = x[i+1]*(i+1)+x[i]*(i+2)+f(i+2, x);
//         return max(a,b);
//     }
// }
//
// void solve() {
//     int n; cin>>n;
//     vector<int>x(n);
//     for(int i=0;i<n;i++) {
//         cin>>x[i];
//     }
//     cout<<f(0, x)<<endl;
// }
//
// int main() {
//     fast; solve();
// }