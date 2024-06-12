//  /* Badal Prasad Singh */
//
//
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define yes cout<<"YES"<<endl;
// #define lol long long int
// #define no cout<<"NO"<<endl;
// #define noo cout<<-1<<endl;
// #define anz cout<<ans<<endl;
//
// double ncr(int n,int r)
// {
//     int i;
//     double p=1.0,q=1.0,ans=1.0;
//
//     if(r>n)
//         return 0.0;
//
//     for(i=0;i<r;i++)
//     {
//         p=n-i;
//         q=i+1;
//         ans*=(p/q);
//     }
//
//     return ans;
// }
//
// void solve() {
//     lol n, m, k; cin>>n>>m>>k; vector<lol>x(m); lol s = 0; for(lol i=0;i<m;i++){ cin>>x[i]; s+=x[i]; }
//     k--;x[k]--;
//     if(s<n){noo; return;}
//     n--; s--; s-=x[k];
//     double a = 0;double b = 0;
//     for(lol i=0;i<=min(n, x[k]);i++) {
//         a+=ncr(x[k], i)*ncr(s,n-i);
//         if(i==0) b = a;
//     }
//     cout<<(a-b)/a<<endl;
// }
//
// int main() {
//     fast;
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
// }
