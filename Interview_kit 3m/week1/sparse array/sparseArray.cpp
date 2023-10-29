#include <bits/stdc++.h>

using namespace std;

vector<int> matchingStrings(vector<string> strings, vector<string> queries)
{
    map<string, int> hash;
    vector<int> v;
    for (int i = 0; i < strings.size(); i++)
    {
        hash[strings[i]]++;
    }
    for (int i = 0; i < queries.size(); i++)
    {
        auto it = hash.find(queries[i]);
        if (it != hash.end())
        {
            v.push_back(it->second);
        }
        else
        {
            v.push_back(0);
        }
    }

    return v;
}

int main()
{
    vector<string> strings, queries;
    int n, n2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        strings.push_back(x);
    }
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        string x;
        cin >> x;
        queries.push_back(x);
    }

    vector<int> v = matchingStrings(strings, queries);
    for (int i = 0; i < n2; i++)
    {
        cout << v[i] << endl;
    }
}