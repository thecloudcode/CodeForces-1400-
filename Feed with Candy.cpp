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
// bool compare(pair<lol, lol> &a, pair<lol, lol> &b) {
//     if (a.first == b.first)
//         return a.second > b.second;
//     return a.first < b.first;
// }
//
// void solve(){
//     lol n; lol k; cin>>n>>k;
//     vector<pair<lol,lol>> x;
//     vector<pair<lol,lol>> y;
//     while(n--) {
//         lol a,b,c; cin>>a>>b>>c;
//         if(a==0) x.push_back({b,c});
//         if(a==1) y.push_back({b,c});
//     }
//     sort(x.begin(), x.end(), compare);
//     sort(y.begin(), y.end(), compare);
//     // for(lol k=0;k<x.size();k++) {
//     //     cout<<x[k].first<<" "<<x[k].second<<endl;
//     // }
//     lol i = 0; lol j = 0;
//     lol ans1 = 0;
//     lol last = -1;
//     while(i<x.size() or j<y.size()) {
//         if(i<x.size() and x[i].first<=k and last!=1) {
//             k+=x[i].second;
//             ans1++;
//             last = 1;
//             i++;
//         }else if(j<y.size() and y[j].first<=k and last!=2) {
//             k+=y[j].second;
//             ans1++;
//             last = 2;
//             j++;
//         }else {
//             break;
//         }
//     }
//     i = 0; j = 0;
//     lol ans2 = 0;
//     last = -1;
//     while(i<x.size() or j<y.size()) {
//         if(j<y.size() and y[j].first<=k and last!=2) {
//             k+=y[j].second;
//             ans2++;
//             last = 2;
//             j++;
//         }else if(i<x.size() and x[i].first<=k and last!=1) {
//             k+=x[i].second;
//             ans2++;
//             last = 1;
//             i++;
//         }else {
//             break;
//         }
//     }
//     cout<<max(ans1,ans2)<<endl;
// }
//
// int main() {
//     fast; solve();
// }