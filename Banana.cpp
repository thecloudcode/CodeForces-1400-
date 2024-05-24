// #include <bits/stdc++.h>
// using namespace std;
//
// #define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define lol long long int
//
// bool check(set<char>c, unordered_map<char, double> &map, int k, int n)
// {
//     int s = 0;
//     for (char i : c){
//         s += ceil(map[i] / k);
//     }
//     if(s<=n) {
//         return true;
//     }
//     return false;
// }
//
// void solve()
// {
//     string x;
//     cin >> x;
//     int n;
//     cin >> n;
//     unordered_map<char, double> map;
//     set<char>c;
//
//     for (char i : x){
//         map[i]++;
//         c.insert(i);
//     }
//
//     if(c.size()>n) {
//         cout<<-1<<endl;
//         return;
//     }
//
//     int l = 1;
//     int r = 1001;
//     int ans = 1;
//     while (l <= r)
//     {
//         int mid = (l + r) / 2;
//         if (check(c, map, mid, n)){
//             ans = mid;
//             r = mid - 1;
//         }
//         else{
//             l = mid + 1;
//         }
//     }
//     string res = "";
//
//     for (char i : c){
//         for (int j = 0; j < ceil(map[i]/ans); j++){
//             res += i;
//         }
//     }
//     while(res.size()<n){
//         res+=x[0];
//     }
//     cout<<ans<<endl;
//     cout<<res<<endl;
// }
//
// int main()
// {
//     fast;
//     solve();
//     return 0;
// }
//
