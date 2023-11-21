#include<bits/stdc++.h>
using namespace std;

int minimumAbsoluteDifference(vector<int> arr) {
    sort(arr.begin(),arr.end());
    int min=INT_MAX;
    for(int i=0;i<arr.size()-1;i++){
        int a=abs(arr[i+1]-arr[i]);
        if(a<=min){
            min=a;
        }
    }
    return min;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cout << minimumAbsoluteDifference(arr) << endl;
}