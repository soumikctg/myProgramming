#include<bits/stdc++.h>
using namespace std;

string twoArrays(int k, vector<int> A, vector<int> B){
    
    for(auto it=A.begin();it!=A.end();it++){
        int a = k - *it;
        auto it1=find(B.begin(),B.end(), a);
        if(it1 != B.end()){

        }
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