// /* Badal Prasad Singh */
//
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false)
// #define lol long long int
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// #define noo cout<<-1<<endl;
// #define anz cout<<ans<<endl;
// unordered_map<char, char>mapp;
// unordered_map<char, lol>c;
//
// void solve() {
//     string x; cin>>x;
//     lol change = 0;
//     lol last = 0;
//     for(char i: x) {
//         if(last==0) {
//             last = int(i);
//         }else if(last<65 and (int)(i)>=65) {
//             last = (int)(i);
//             change++;
//         }else if(last>=65 and (int)(i)<65) {
//             last = (int)(i);
//             change++;
//         }
//     }
//     if(change>1) {
//         lol p = x.find('C');
//         string r = x.substr(1, p-1);
//         string c = x.substr(p+1);
//         lol row = stoi(r);
//         lol n = stoi(c);
//         string column;
//         while (n > 0) {
//             int rem = n % 26;
//             if (rem == 0) {
//                 column = 'Z' + column;
//                 n = (n / 26) - 1;
//             } else {
//                 column = char('A' + rem - 1) + column;
//                 n /= 26;
//             }
//         }
//         cout<<column<<row<<endl;
//     }else {
//         string c = ""; string r = "";
//         for(char i: x) {
//             if((int)(i)>=65) c+=i;
//             else r+=i;
//         }
//         lol n = c.size()-1;
//         lol col = 0;
//         for(char i: c) {
//             col += ((int)(i)-(int)('A')+1)*(pow(26,n));
//             n--;
//         }
//         cout<<"R"<<r<<"C"<<col<<endl;
//     }
// }
//
// int main(){
//     lol t; cin>>t;
//     while(t--) {
//         solve();
//     }
// }