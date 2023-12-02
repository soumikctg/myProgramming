#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
        map<int,int> hash;
        int s = nums.size();
        for(int i=0;i<s;i++){
            hash[nums[i]]++;
        }
        if(hash.size()==s){
            return  false;
        }
        else{
            return true;
        }
}

int main(){
    int n;
    cin >> n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }

    cout << containsDuplicate(nums) << endl;
}