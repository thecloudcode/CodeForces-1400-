// /* Badal Prasad Singh */
//
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false)
// #define lol long long int
//
// void solve() {
//     lol n; cin>>n;
//     lol area = 0;
//     lol minx = INT_MAX; lol maxx = INT_MIN;
//     lol miny = INT_MAX; lol maxy = INT_MIN;
//     while(n--) {
//         lol x1; lol x2; lol y1; lol y2;
//         cin>>x1>>y1>>x2>>y2;
//         minx = min(minx, min(x1,x2));
//         maxx = max(maxx, max(x1,x2));
//         miny = min(miny, min(y1,y2));
//         maxy = max(maxy, max(y1,y2));
//         area += abs(x2-x1)*abs(y2-y1);
//     }
//     if(abs(maxx-minx)*abs(miny-maxy)==area and abs(maxx-minx)==abs(miny-maxy)) {
//         cout<<"YES"<<endl;
//     }else {
//         cout<<"NO"<<endl;
//     }
// }
//
// int main() {
//     fast; solve();
// }