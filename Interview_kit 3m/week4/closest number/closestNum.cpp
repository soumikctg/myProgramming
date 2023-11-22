#include<bits/stdc++.h>
using namespace std;

vector<int> closestNumbers(vector<int> arr) {
    sort(arr.begin(),arr.end());
    vector <int> hash;
    int max=INT_MAX;
    for(int i=0;i<arr.size()-1;i++){
        int a=arr[i+1]-arr[i];
        if(a<max){
            max=a;
            hash.clear();
            hash.push_back(arr[i]);
            hash.push_back(arr[i+1]);
        }
        else if(a==max){
            hash.push_back(arr[i]);
            hash.push_back(arr[i+1]);
        }
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
    vector<int> v = closestNumbers(arr);
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}