#include<bits/stdc++.h>
using namespace std;

int birthday(vector<int> s, int d, int m){
    int n=s.size()-m+1;
    vector <int> hash;
    for(int i=0;i<n;i++){
        
    }
    int count=0;
    if(s.size()==m){
        count++;
    }
    for(int i=0;i<n;i++){
        int t=0;
        int j=i, k=0;
        while(k<m){
            t=t+s[j];
            k++;
            j++;
        }
        cout << t << " ";
        if(t==d){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    vector<int> s;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        s.push_back(x);
    }
    int d,m;
    cin >> d >> m;

    cout << birthday(s,d,m) << endl;
}