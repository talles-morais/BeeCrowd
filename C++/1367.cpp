#include <bits/stdc++.h>
using namespace std;

int main()
{
  unordered_map<int, int> gabarito;
  unordered_map<int, int> correto;
  int n;
  char problem;
  int time;
  string status;
  int rS = 0, rP = 0, counter = 0;

  while (cin >> n && n)
  {
    for (int i = 0; i < n; i++)
    {
      cin >> problem >> time >> status;

      if (status == "incorrect")
      {
        gabarito[problem] += 20;
      }
      else if (status == "correct")
      {
        gabarito[problem] += time;
        correto[problem] = 1;
      }
    }

    for(int i='A';i<='Z';i++) {
      if(correto[i] == 1){
        rS++;
        rP += gabarito[i];
      }
    }

    cout << rS << " " << rP << endl;
    gabarito.clear();
    correto.clear();
    rS = rP = counter = 0;
  }
}