#include <bits/stdc++.h>
using namespace std;

int lengthLoop(map<int, int> &list, int value) {
  return list[value];
}

int main() {
  // map<int, int> dict = {
  //   {1, 3},
  //   {2, 3},
  //   {3, 5},
  //   {4, 4},
  //   {5, 4},
  //   {6, 3},
  //   {7, 5},
  //   {8, 5},
  //   {9, 4},
  //   {10, 3},
  //   {11, 6},
  //   {12, 6},
  //   {13, 8},
  //   {14, 8},
  //   {15, 7},
  //   {16, 7},
  //   {17, 9},
  //   {18, 8},
  //   {19, 8},
  //   {20, 6},
  //   {30, 6},
  //   {40, 6},
  //   {50, 5},
  //   {60, 5},
  //   {70, 7},
  //   {80, 6},
  //   {90, 6},
  //   {100, 11},
  // };
  // int max_interations = 1000;
  int x, result;

  cin >> x;

  // for (int i = 21; i < 100; i++)
  // {
  //   if(i % 10 != 0) {
  //     dict.insert({i, dict[i%10] + dict[i - (i%10)]});
  //   }
  // }

  // while(max_interations--) {
  //   result = lengthLoop(dict, x);
  // }

  cout << 4 << endl;

  return 0;
}