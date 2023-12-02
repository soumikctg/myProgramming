#include<bits/stdc++.h>
using namespace std;

int pickingNumbers(vector<int> a) {
    int x =0;
    int count=1;
    for(int i=0;i<a.size();i++){
        if(abs(a[i+1]-a[i])<=1){
            count++;
        }
        else{
            // cout << count << endl;
            if(x<count){
                x=count;
            }
            count = 1;
        }
    }
    return x;
}

int main(){
    int n;
    cin >> n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    cout << pickingNumbers(a) << endl;
}