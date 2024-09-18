#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, cod, quant;
  double result = 0.0;
  map<int, double> cardapio;

  cardapio[1001] = 1.5;
  cardapio[1002] = 2.5;
  cardapio[1003] = 3.5;
  cardapio[1004] = 4.5;
  cardapio[1005] = 5.5;

  cin >> n;
  cout << fixed << setprecision(2);

  while (n--)
  {
    cin >> cod >> quant;

    result += cardapio[cod] * quant;
  }
  cout << result << endl;
  return 0;
}