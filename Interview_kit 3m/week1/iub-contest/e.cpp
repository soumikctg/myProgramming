#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    x=4;
    int x;
    cin >> n;
    map<string, int> name;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        name[s]++;
        auto it = name.find(s);
        if(it->second == 1){
            cout << "NO" <<endl;
        }
        else if(it->second > 1){
            cout << "YES" << endl;
        }
    }
}