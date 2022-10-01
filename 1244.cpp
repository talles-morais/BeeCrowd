#include <bits/stdc++.h>
#include <vector>

using namespace std;

bool cp(const string &a, const string &b)
{
    return a.length() > b.length();
}

vector<string> split(string text, string delim, bool compress)
{
    vector<string> vec;
    size_t pos = 0, prevPos = 0;
    while (1)
    {
        pos = text.find_first_of(delim, prevPos);

        while (compress)
        {
            if (prevPos == pos)
                prevPos++;
            else
                break;

            pos = text.find_first_of(delim, prevPos);
        }

        if (pos == string::npos)
        {
            if (prevPos != text.size())
                vec.push_back(text.substr(prevPos));
            return vec;
        }

        vec.push_back(text.substr(prevPos, pos - prevPos));
        prevPos = pos + 1;
    }
}

int main()
{
    int casos, n = 0, i = 0;
    string s;
    vector<string> v;
    vector<string>::iterator it;

    cin >> casos;
    getchar();

    while (casos--)
    {

        getline(cin, s);
        v = split(s, " ", true);

        stable_sort(v.begin(), v.end(), cp);

        cout << *v.begin();
        for (it = v.begin() + 1; it != v.end(); ++it)
        {
            cout << " " << *it;
        }
        cout << endl;
    }

    return 0;
}