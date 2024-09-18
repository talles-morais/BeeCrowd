#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  string str;

  cin >> n;
  cin.ignore();

  for (int i = 0; i < n; i++)
  {
    getline(cin, str);

    // primeira
    for (int i = 0; i < str.length(); i++)
    {
      if (str[i] >= 'A' && str[i] <= 'z')
      {
        str[i] += 3;
      }
    }
    // reverse
    reverse(str.begin(), str.end());
    // terceira
    for (int i = (str.length() / 2); i < str.length(); i++)
    {
      str[i]--;
    }

    cout << str << endl;
  }

  return 0;
}