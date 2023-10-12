#include<bits/stdc++.h>
using namespace std;

vector<int> breakingRecords(vector<int> scores){
    int min=scores[0], max=scores[0];
    vector<int> count={0,0};
    for(int i=1;i<scores.size();i++){
        if(scores[i]>max){
            max=scores[i];
            count[0]++;
        }
        else if(scores[i]<min){
            min=scores[i];
            count[1]++;
        }
    }

    return count;
}


int main(){
    int n;
    cin >> n;
    vector<int> scores;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        scores.push_back(x);
    }
    vector<int> breakR = breakingRecords(scores);
    cout << breakR[0] << " " << breakR[1];
}