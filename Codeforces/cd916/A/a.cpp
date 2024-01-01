#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char,int> hash;
        for(int j=0;j<n;j++){
            hash[s[j]]++;
        }
        int count=0;
        for(auto it=hash.begin();it!=hash.end();it++){
            if((it->first-'@')<=it->second){
                count++;
            }
        }
        cout << count << endl;
    }

    
}