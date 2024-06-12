//  /* Badal Prasad Singh */
//
//
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define yes cout<<"YES"<<endl;
// #define lol int
// #define no cout<<"NO"<<endl;
// #define noo cout<<-1<<endl;
// #define anz cout<<ans<<endl;
//
// bool f(string a, vector<lol>&dp) {
//     int x = stoi(a);
//     if(x==0) return true;
//     if(dp[x]!=-1) return dp[x];
//     bool ans = false;
//     lol k = 1;
//     for(lol i=0;i<a.size();i++) {
//         k*=10;k++;
//         string xx = to_string(x-k);
//         if(x-k>=0) ans = ans or f(xx, dp); else break;
//         if(ans==true) return true;
//     }
//     return dp[x]=ans;
// }
//
// void solve() {
//     // string x; cin>>x;
//     lol x; cin>>x;
//     // vector<lol>dp(stoi(x)+1,-1);
//     if(x>=111*(x%11)) {
//         yes;
//     }else no;
//
//
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     cin >> t;
//     while (t--) solve();
// }
