// #include <bits/stdc++.h>

// using namespace std;

// int n;
// int total_dist;
// int total_price;
// int min_price;
// vector<int> dist;
// vector<int> price;

// int main(void) {
//   cin >> n;
//   for (int i = 0; i < n-1; i++) {
//     int x;
//     cin >> x;
//     dist.push_back(x);
//     total_dist += dist[i];
//   }
//   for (int j = 0; j < n; j++) {
//     int y;
//     cin >> y;
//     price.push_back(y);
//   }

//   // absolutely
//   total_price += price[0] * dist[0];
//   total_dist -= dist[0];
//   min_price = price[0];

//   for(int i = 1; i < n-1; i++) {
//     if(total_dist <= 0) break;
//     if(price[i] < min_price) min_price = price[i];
//     total_price += min_price * dist[i];
//     total_dist -= dist[i];
//   }
//   cout << total_price;
//   return 0;
// }