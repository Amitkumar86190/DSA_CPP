#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// ======================================================================================================
// this is muy apprch is this the store the first element in one variable and 
// move one palce all element then store the at last palce tc is O(n) and sc is O(1)



// class Solution {
// public:
//     void rotatebyonepace(vector<int>nums){
//         int rotateelement=nums[0];
//         for(int i=1; i<nums.size(); i++){
//              nums[i-1]=nums[i];
//         }
//         nums[nums.size()-1]=rotateelement;
//         for(int i=0; i<nums.size(); i++){
//             cout<<nums[i]<<" ";
//         }
//     }
// };

// int main() {
//     Solution obj;
//     obj.rotatebyonepace({1,2,3,4,5});
//     return 0;
    
// }

// ============================================================================================================
