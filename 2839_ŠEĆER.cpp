// #include <bits/stdc++.h>

// using namespace std;

// int n;
// int n2;
// int max_for5;
// int max_for3;
// int n_copy;
// int cnt;
// int cointypes[2] = {5, 3};
// int x, y;

// int main() {
//   cin >> n;
//   n_copy = n;
//   n2 = n;

//   max_for5 = n / cointypes[0]; // 5
//   max_for3 = n / cointypes[1]; // 3

//   for (int i = 0; i < max_for5; i++) {
//     for ( int j= 0; j < max_for3; j++) {
//       n = n % (cointypes[0] * i);
//       if(0 == n) {
//         x = i;
//         break;
//       }
//       else {
//         n = n % (cointypes[1] * j);
//         if (0 == n) {
//           y = j;
//           break;
//         }
//       }
//     }
//   }
//   cout << x << ' ' << y << endl;
/*   ////// method 1 => fail
//   while(true){
//     if(n >= 5){
//       cnt = n / cointypes[0];
//       n %= cointypes[0];
//       if(0 == n) {
//         break;
//       }
//       else {
//         cnt += n / cointypes[1];
//         n = n % cointypes[1];
//         if(0 == n) {
//           break;
//         }
//         else {
//           cnt = n_copy / cointypes[1];
//           n_copy %= cointypes[1];
//           if(0 == n_copy) {
//             break;
//           }
//           else {
//             cnt = -1;
//           }
//         }
//       }
//     }
//     else {
//       if (3 == n) cnt = 1;
//       else cnt = -1;
//       break;
//     }
//   }
*/
//   cout << cnt;
// }