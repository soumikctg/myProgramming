#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    map<int, int> pf;

    for(int i=0;i<n;i++){
        pf.insert({v[i], i});
    }

    map<int,int> :: iterator it = pf.begin();
    while(it != pf.end()){
        cout << it->second+1 << " " ;
        it++;
    }


}