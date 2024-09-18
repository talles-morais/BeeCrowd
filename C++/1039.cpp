#include <bits/stdc++.h>
using namespace std;

int main()
{
  int r1;
  int x1, y1;
  int r2;
  int x2, y2;

  double dist;
  double distValida;
  while (cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2)
  {
    dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    distValida = r2 + dist;

    if (r1 >= distValida) // distancia do circulo >= dist + raio da flor
      cout << "RICO" << endl;
    else
      cout << "MORTO" << endl;

    if (cin.eof())
      break;
  }

  return 0;
}