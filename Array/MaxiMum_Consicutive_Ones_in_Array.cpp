#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void maximum_one(vector<int>nums){
        int maximum=0;
        int count=0;

        for(int i=0; i<nums.size();  i++){
            if(nums[i]==1){
                count++;
                maximum=max(count,maximum);
            }else{
                count=0;
            }
        }
        cout<<maximum;
    }
};

int main() {
    vector<int>nums={1,1,1,1,1,1,0,1,1,2,3,1,1,1,1};
    Solution obj;
    obj.maximum_one(nums);
    return 0;
    
}