#include<bits/stdc++.h>

using namespace std;

int lonelyinteger(vector<int> a){
    map<int, int> hash;

    for(int i=0; i<a.size(); i++){
        hash[a[i]]++;
    }

    for(auto it=hash.begin(); it!=hash.end(); it++){
        if(it->second == 1){
            return it->first;
        }
    }
    return 1;
}

int main(){
    int n ;
    cin >> n;
    vector<int> v;
    for(int i =0 ;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << lonelyinteger(v);
}