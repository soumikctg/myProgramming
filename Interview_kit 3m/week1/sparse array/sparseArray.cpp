#include<bits/stdc++.h>

using namespace std;

vector<int> matchingStrings(vector<string> strings, vector<string> queries){
    vector< pair<string, int> > hash;
}

int main(){
    vector<string> strings, queries;
    int n,n2;
    cin >> n;
    for(int i=0;i<n;i++){
        string x;
        cin >> x;
        strings.push_back(x);
    }
    cin >> n2;
    for(int i=0;i<n2;i++){
        string x;
        cin >> x;
        queries.push_back(x);
    }

    matchingStrings(strings,queries);
}