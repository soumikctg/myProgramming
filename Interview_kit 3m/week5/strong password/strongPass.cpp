#include<bits/stdc++.h>
using namespace std;

int minimumNumber(int n, string password) {
    int num=0, lc=0, uc=0, sc=0,count=0;
    int s= password.size();
    for(int i =0;i<n;i++){
        if(password[i]>=48 && password[i]<=57){
            num++;
        }
        else if(password[i]>=65 && password[i]<=90){
            uc++;
        }
        else if(password[i]>=97 && password[i]<=122){
            lc++;
        }
        else if(password[i]=='!' || password[i]=='@' ||password[i]=='#' || password[i]=='$' ||password[i]=='%' || password[i]=='^' ||password[i]=='&' || password[i]=='*' ||password[i]=='(' || password[i]==')' ||password[i]=='-' || password[i]=='+'){
            sc++;
        }
    }
    if(num<1){
        count++;
    }
    if(lc<1){
        count++;
    }
    if(uc<1){
        count++;
    }
    if(sc<1){
        count++;
    }
    if(count>0 && s+count<6){
        count = count+ (6-(s+count));
    }
    else if(count == 0 & s<6){
        count = count+(6-s);
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    string password;
    cin.ignore();
    getline(cin,password);

    cout << minimumNumber(n,password);
}