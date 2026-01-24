#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main() {
    vector<int> nums={3,4,5};

    for(int i=1; i<nums.size(); i++){
        if(nums[i]>=nums[i-1]){

        }else{
            cout<<"array is not sorted"<<endl;
            return 0;
        }
    }
    cout<<"array is the sorted"<<endl;
    return 0;
}