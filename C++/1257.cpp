#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, linhas;
  string str;
  int count = 0;

  cin >> n;

  while (n--)
  {
    cin >> linhas;
    for (int i = 0; i < linhas; i++)
    {
      cin >> str;

      for (int j = 0; j < str.length(); j++)
        count += (str[j] - 'A') + (i) + (j);
    }

    cout << count << endl;

    count = 0;
  }

  return 0;
}