#include <bits/stdc++.h>
using namespace std;

int main() {
  double h;
  double p1, p2;
  double tries;
  double ang, vel;

  double voo, alcance;
  double g = 9.80665;
  double pi = 3.14159;
  cout << fixed << setprecision(5);

  while(cin >> h >> p1 >> p2 >> tries) {
    for (int i = 0; i < tries; i++)
    {
      cin >> ang >> vel;

      voo = (vel * sin(ang) + sqrt(pow(vel*sin(ang), 2) + 2*g*h));
      alcance = ((vel*cos(ang))/g)*voo;

      cout << alcance;
      if(alcance >= p1 && alcance <= p2) {
        cout << " -> DUCK" << endl; 
      }else {
        cout << " -> NUCK" << endl;
      }
    }
    
  }

  return 0;
}