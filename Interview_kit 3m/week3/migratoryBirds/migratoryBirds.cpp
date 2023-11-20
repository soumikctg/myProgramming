#include<bits/stdc++.h>
using namespace std;
int migratoryBirds(vector<int> arr) {
    map<int, int> hash;
    for(int i=0;i<arr.size();i++){
        hash[arr[i]]++;
    }
    int max=INT_MIN;
    int a;
    for(auto it=hash.begin();it!=hash.end();it++){
        if(max < it->second){
            max=it->second;
            a=it->first;
        }
    }
    return a;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cout << migratoryBirds(arr);
}
