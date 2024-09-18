#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int T, M, N;
  string key, value, input, word;
  map<string, string> dictionary;

  cin >> T;
  cin.ignore();

  while (T--)
  {
    cin >> M >> N;
    cin.ignore();

    for (int i = 0; i < M; i++)
    {
      getline(cin, key);
      getline(cin, value);
      dictionary.insert({ key, value });
    }

    for (int i = 0; i < N; i++)
    { 
      getline(cin, input);
      stringstream ss(input);

      bool firstWord = true;
      while (ss >> word)
      {
        if(!firstWord) cout << " ";
        if(!dictionary[word].empty())
          cout << dictionary[word];
        else
          cout << word;
        firstWord = false;
      }
      cout << endl;
    }
    cout << endl;
    dictionary.clear();
  }

  return 0;
}