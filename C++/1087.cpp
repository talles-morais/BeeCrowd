#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x1, y1, x2, y2;
  int distx, disty;

  while (cin >> x1 >> y1 >> x2 >> y2 && x1 && x2 && y1 && y2)
  {
    distx = abs(x2 - x1);
    disty = abs(y2 - y1);

    if (distx == 0 && disty == 0)
      cout << 0 << endl;
    else if (distx == disty || (x2 == x1 || y2 == y1))
      cout << 1 << endl;
    else 
      cout << 2 << endl;
  }

  return 0;
}