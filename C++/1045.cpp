#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b, c;

  cin >> a >> b >> c;

  vector<double> vet = {a, b, c};
  sort(vet.rbegin(), vet.rend());
  a = vet[0];
  b = vet[1];
  c = vet[2];

  if(a >= (b+c)) cout << "NAO FORMA TRIANGULO" << endl;
  else {
    if(a == sqrt(pow(b, 2) + pow(c, 2))) cout << "TRIANGULO RETANGULO" << endl;
    else if(a > sqrt(pow(b, 2) + pow(c, 2))) cout << "TRIANGULO OBTUSANGULO" << endl;
    else if(a < sqrt(pow(b, 2) + pow(c, 2))) cout << "TRIANGULO ACUTANGULO" << endl;

    if(a == b && a == c && b == c) cout << "TRIANGULO EQUILATERO" << endl;
    else if(a == b || a == c || b == c) cout << "TRIANGULO ISOSCELES" << endl;
  }

  return 0;
}