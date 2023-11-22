#include<bits/stdc++.h>
using namespace std;

vector<int> maximumPerimeterTriangle(vector<int> sticks) {
    vector<int> tri;
    sort(sticks.begin(),sticks.end(),greater<int>());
    for(int i=0;i<sticks.size()-2;i++){
        if(sticks[i+1]+sticks[i+2]>sticks[i]){
            tri.push_back(sticks[i+2]);
            tri.push_back(sticks[i+1]);
            tri.push_back(sticks[i]);
            break;
        }
    }
    if(tri.size()==0){
        tri.push_back(-1);
    }
    return tri;
}

int main(){
    int n;
    cin >> n;
    vector<int> sticks;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        sticks.push_back(x);
    }
    vector<int> v=maximumPerimeterTriangle(sticks);
    for(int i=0;i<v.size();i++){
        cout << v[i] << endl;
    }
}