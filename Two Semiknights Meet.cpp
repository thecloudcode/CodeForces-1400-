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
//     vector<string>chess;
//     for(lol i=0;i<8;i++) {
//         string x; cin>>x; chess.push_back(x);
//     }
//     lol a=-1; lol b=-1; lol c=-1; lol d=-1;
//     for(lol i=0;i<8;i++) {
//         for(lol j=0;j<8;j++) {
//             if(a==-1 and chess[i][j]=='K') {
//                 a = i; b = j;
//             }else if(c==-1 and chess[i][j]=='K'){
//                 c = i; d = j;
//             }
//         }
//     }
//     if(a==-1 or c==-1) {
//         cout<<"NO"<<endl;
//         return;
//     }
//     chess[a][b] = 'a';
//     chess[c][d] = 'b';
//     if((a-c)%4==0 and (b-d)%4==0) {
//         yes;
//     }else {
//         no;
//     }
// }
//
// int main() {
//     fast;
//     lol t; cin>>t;
//     while(t--) {
//         solve();
//     }
// }