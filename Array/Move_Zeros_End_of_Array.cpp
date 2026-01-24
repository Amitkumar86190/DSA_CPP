#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums={1,0,2,3,4,6,0,0,6,4,0,9,0};

    int j;
    for(int i=0; i<nums.size();  i++){
        if(nums[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1; i<nums.size(); i++){
        if(nums[i]==0){
            continue;
        }else{
            swap(nums[j],nums[i]);
            j++;
        }
    }
    for(auto i: nums){
        cout<<i<<" ";
    }
    return 0;
}