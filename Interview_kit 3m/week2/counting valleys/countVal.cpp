#include<bits/stdc++.h>
using namespace std;

int countingValleys(int steps, string path){
    int val=0;
    int s=0;
    int x=0;
    for(int i=0;i<steps;i++){ 
        if(path[i]=='U'){
            s++;
        }
        else if(path[i]=='D'){
            s--;
        }
        
        if(s==0 && x<0){
            val++;
        }
        x = s;
    }
    return val;
}

int main(){
    int n;
    cin >> n;
    string s;
    cin.ignore();
    getline(cin, s);

    cout << countingValleys(n,s);
}