#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s){
    if (s[8] == 'P') { 
        string strh = "";
        strh += s[0];
        strh += s[1];

        int h = stoi(strh);

        if (h < 12) {
            h += 12;
        }

        string sh = to_string(h);
        string t = "";

        if (sh.length() == 1) {
            t += '0';   
            t += sh[0];
        } else {
            t += sh[0];
            t += sh[1];
        }

        for (int i = 2; i < 8; i++) {
            t += s[i]; 
        }
        return t;
    }
    else{
        string strh = "";
        strh += s[0];
        strh += s[1];

        int h = stoi(strh);
        if(h==12){
            h=0;
        }
        string sh = to_string(h);
        string t = "";

        if (sh.length() == 1) {
            t += '0';   
            t += sh[0];
        } else {
            t += sh[0];
            t += sh[1];
        }

        for (int i = 2; i < 8; i++) {
            t += s[i]; 
        }
        return t;
    }
}


int main() {
    string s = "12:02:00AM"; 
    string result = timeConversion(s);
    cout << result;
}
