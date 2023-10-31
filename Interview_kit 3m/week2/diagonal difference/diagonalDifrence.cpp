#include<bits/stdc++.h>

using namespace std;

int diagonalDifference(vector<vector<int>> arr){
    int diagon1=0, diagon2=0, n=arr.size();
    int i=0,j=0;
    while(i<n){
        diagon1=diagon1+arr[i][j];
        i++;
        j++;
    }
    i=n-1,j=0;
    while(i>=0){
        diagon2=diagon2+arr[i][j];
        i--;
        j++;
    }
    int dif=diagon1-diagon2;
    return abs(dif);
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> vector2D;
    
    for(int i=0;i<n;i++){
        vector<int> vect;
        for(int j=0;j<n;j++){
            int x;
            cin >> x;
            vect.push_back(x);
        }
        vector2D.push_back(vect);
    }

    
    cout << diagonalDifference(vector2D);
}