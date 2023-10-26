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