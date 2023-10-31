#include<bits/stdc++.h>
using namespace std;

vector<int> countingSort(vector<int> arr){
    vector<int> hash(100, 0);
    for(int i=0;i<arr.size();i++){
        hash[arr[i]]++;
    }
    return hash;
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

    vector<int> arrCount = countingSort(arr);
    for(int i=0;i<n;i++){
        cout << arrCount[i] << " ";
    }
}