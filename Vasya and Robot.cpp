// /* Badal Prasad Singh */
//
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false)
// #define lol long long int
//
// void solve() {
//     lol n; lol l; lol r; lol q1; lol q2; cin>>n>>l>>r>>q1>>q2;
//     vector<lol>x(n);
//     for(lol i=0;i<n;i++) cin>>x[i];
//     lol last = 0;
//     lol i = 0; lol j = n-1;
//     lol ans = 0;
//     lol choose = true; // left;
//     while(i<=j) {
//         if(choose) {
//             lol left = x[i]*l;
//             if(last==-1) left+=q1;
//             lol right = x[i]*r + (j-i)*q2;
//             if(left<=right) {
//                 ans+=left;
//                 last = -1;
//                 i++;
//             }
//         }else {
//
//         }
//     }
//     cout<<ans<<endl;
// }
//
// int main() {
//     fast; solve();
// }