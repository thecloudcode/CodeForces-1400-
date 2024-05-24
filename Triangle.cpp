// /* Badal Prasad Singh */
//
// #include<bits/stdc++.h>
// using namespace std;
//
// #define fast  ios_base::sync_with_stdio(false)
// #define lol double
//
// lol x1; lol x2; lol x3; lol y2; lol y3; lol yy1;
// bool check() {
//     if(x1==x2 and yy1==y2 or x1==x3 and yy1==y3 or x2==x3 and y2==y3) {
//         return false;
//     }
//     double a = sqrt(pow(y2 - yy1, 2) + pow(x2 - x1, 2));
//     double b = sqrt(pow(y3 - y2, 2) + pow(x3 - x2, 2));
//     double c = sqrt(pow(yy1 - y3, 2) + pow(x1 - x3, 2));
//
//     double hypotenuse = max(max(a, b), c);
//     double side1, side2;
//     if (hypotenuse == a) {
//         side1 = b;
//         side2 = c;
//     } else if (hypotenuse == b) {
//         side1 = a;
//         side2 = c;
//     } else {
//         side1 = a;
//         side2 = b;
//     }
//     // if(fabs(pow(hypotenuse, 2) - (pow(side1, 2) + pow(side2, 2))) < 0.000001) {
//     //     cout<<x1<<" "<<yy1<<endl;
//     //     cout<<x2<<" "<<y2<<endl;
//     //     cout<<x3<<" "<<y3<<endl;
//     // }
//     return fabs(pow(hypotenuse, 2) - (pow(side1, 2) + pow(side2, 2))) < 0.000001;
// }
//
// void solve() {
//     cin>>x1>>yy1>>x2>>y2>>x3>>y3;
//     bool flag = false;
//     flag = check();
//     if(flag==true) {
//         cout<<"RIGHT"<<endl; return;
//     }
//     if(flag == false) { x1++; flag = check(); x1--; }
//     if(flag == false) { x2++; flag = check(); x2--; }
//     if(flag == false) { x3++; flag = check(); x3--; }
//     if(flag == false) { yy1++; flag = check(); yy1--; }
//     if(flag == false) { y2++; flag = check(); y2--; }
//     if(flag == false) { y3++; flag = check(); y3--; }
//     if(flag == false) { x1--; flag = check(); x1++; }
//     if(flag == false) { x2--; flag = check(); x2++; }
//     if(flag == false) { x3--; flag = check(); x3++; }
//     if(flag == false) { yy1--; flag = check(); yy1++; }
//     if(flag == false) { y2--; flag = check(); y2++; }
//     if(flag == false) { y3--; flag = check(); y3++; }
//
//     if(flag) {
//         cout<<"ALMOST"<<endl; return;
//     }
//     cout<<"NEITHER"<<endl;
// }
// int main() {
//     fast; solve();
// }