#include<bits/stdc++.h>
using namespace std;

int countingValleys(int steps, string path){
    int val=0;
    int s=0;
    bool t=true;
    for(int i=0;i<steps;i++){
        if(s==0 && t==false){
            val++;
        }
        if(s<0){
            t=false;
        }
        else{
            t=true;
        }

        
        
        if(path[i]=='U'){
            s++;
        }
        else if(path[i]=='D'){
            s--;
        }
        
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