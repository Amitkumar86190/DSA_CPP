#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={10 ,9,10};
    int first=10;
    int second=INT_MIN;

    for(int i=0; i<nums.size(); i++){
        if(nums[i]>=second && nums[i]<first){
            second=nums[i];
        }
    }
    cout<<first<<"   "<<second;
    return 0; 
}