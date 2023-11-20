#include<bits/stdc++.h>
using namespace std;

string twoArrays(int k, vector<int> A, vector<int> B){
    sort(A.begin(),A.end());
    sort(B.begin(),B.end(),greater<int>());
    int t=0;
    for(int i=0;i<A.size();i++){
        if(A[i]+B[i]>=k){
            t++;
        }
    }
    if(t==A.size()){
        return "YES";
    }
    else{
        return "NO";
    }

}

int main(){
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        int n,k;
        vector<int> A, B;

        cin >> n >> k;
        for(int j=0;j<n;j++){
            int a;
            cin >> a;
            A.push_back(a);
        }
        for(int j=0;j<n;j++){
            int a;
            cin >> a;
            B.push_back(a);
        }  
        cout << twoArrays(k,A,B) << endl;
    }

    
}