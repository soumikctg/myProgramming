#include<bits/stdc++.h>
using namespace std;

int sockMerchant(int n, vector<int> ar) {
    map<int,int> hash;
    for(int i=0;i<n;i++){
        hash[ar[i]]++;
    }
    int count=0;
    for(auto it=hash.begin();it!=hash.end();it++){
        count = count+ (it->second/2);
    }
    return count;
}

int main(){
    int n;
    cin >> n;

    vector<int> ar;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        ar.push_back(x);
    }

    cout << sockMerchant(n,ar) << endl;
}