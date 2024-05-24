// /* Badal Prasad Singh */
//
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false)
// #define lol long long int

// void solve() {
//     lol n; cin>>n;
//     vector<lol>x(n);
//
//     for(lol i=0;i<n;i++) {
//         cin>>x[i];
//     }
//
//     lol s = 0; lol o = 0; lol maxodd = INT_MIN; bool taken = false; lol minodd = INT_MAX;
//     for(lol i: x) {
//         if(abs(i)%2==0 and i>=0) {
//             s+=i;
//             taken = true;
//         }else if(abs(i)%2==1 and i>=0){
//             o++;
//             s+=i;
//             if(i<minodd) {
//                 minodd = i;
//             }
//             taken = true;
//         }else if(abs(i)%2==1 and i<0) {
//             if(i>maxodd) {
//                 maxodd = i;
//             }
//         }
//     }
//
//     if(s%2==0) {
//         s-=min(minodd, -maxodd);
//     }
//     cout<<s<<endl;
//
// }
//
// int main() {
//     fast; solve();
// }