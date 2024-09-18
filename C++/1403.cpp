#include <bits/stdc++.h>
using namespace std;

bool compareByValueDesc(const pair<int, int> &a, const pair<int, int> &b)
{
  return a.second > b.second;
}

bool compareByKey(const pair<int, int> &a, const pair<int, int> &b)
{
  return a.first < b.first;
}

void insertSorted(vector<int> &vet, int value)
{
  auto it = lower_bound(vet.begin(), vet.end(), value);
  vet.insert(it, value);
}

int main()
{
  int n, m, player;
  int secondPlace = 0;
  map<int, int> players;
  vector<int> orderedSecondPlaces;

  while (cin >> n >> m)
  {
    if (n == 0 && m == 0)
      break;

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cin >> player;
        players.insert({player, players[player]++});
      }
    }

    vector<pair<int, int>> orderedPlayers(players.begin(), players.end());

    sort(orderedPlayers.begin(), orderedPlayers.end(), compareByValueDesc);
    secondPlace = orderedPlayers[1].second; // pontuação do segundo lugar

    for (auto x : orderedPlayers)
    {
      if (x.second == secondPlace)
        insertSorted(orderedSecondPlaces, x.first);
    }

    for (auto x : orderedSecondPlaces)
      cout << x << " ";
    cout << endl;

    secondPlace = 0;
    players.clear();
    orderedPlayers.clear();
    orderedSecondPlaces.clear();
  }

  return 0;
}