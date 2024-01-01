#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    char arr[3][3];
    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                cin >> arr[j][k];
            }
        }

        for(int j=0;j<3;j++){
            if(arr[j][0]=='?'){
                if((arr[j][1]=='A' && arr[j][2]=='B') || (arr[j][1]=='B' && arr[j][2]=='A')){
                    cout << 'C' << endl;
                }
                else if((arr[j][1]=='B' && arr[j][2]=='C') || (arr[j][1]=='C' && arr[j][2]=='B')){
                    cout << 'A' << endl;
                }
                else{
                    cout << 'B' << endl;
                }
            }
            else if(arr[j][1]=='?'){
                if((arr[j][0]=='A' && arr[j][2]=='B') || (arr[j][0]=='B' && arr[j][2]=='A')){
                    cout << 'C' << endl;
                }
                else if((arr[j][0]=='B' && arr[j][2]=='C') || (arr[j][0]=='C' && arr[j][2]=='B')){
                    cout << 'A' << endl;
                }
                else{
                    cout << 'B' << endl;
                }
            }
            
            else if(arr[j][2]=='?'){
                if((arr[j][1]=='A' && arr[j][0]=='B') || (arr[j][1]=='B' && arr[j][0]=='A')){
                    cout << 'C' << endl;
                }
                else if((arr[j][1]=='B' && arr[j][0]=='C') || (arr[j][1]=='C' && arr[j][0]=='B')){
                    cout << 'A' << endl;
                }
                else{
                    cout << 'B' << endl;
                }
            }
            
        }
    }

}