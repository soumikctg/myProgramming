#include<bits/stdc++.h>
using namespace std;

vector<int> gradingStudents(vector<int> grades){
    for(int i=0;i<grades.size(); i++){
        if(grades[i]>=38){
            int a = grades[i]%5;
            int b = grades[i]/5;
            if(a>2){
                grades[i]=5*(b+1);
            }
        } 
    }
    return grades;
}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> grade;
    grade=gradingStudents(v);
    for(int i=0; i<n; i++){
        cout << grade[i] << endl;
    }
}