// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;


// ===================================================================================
// this is the brute force approach to left rotate an array by d places
// in this the time complexity is O(n) and space complexity is O(d)


// class Solution {
// public:
//     void LeftRotateArrayByDplace(vector<int>&nums,int d){
//         d=d%nums.size(); // in case d>n
//         vector<int>temp;
//         for(int i=0; i<d; i++){
//               temp.push_back(nums[i]);
//         }
//         int index=0;
//         for(int i=d; i<nums.size();  i++){
//             nums[index]=nums[i];
//             index++;
//         }
//         int tempindex=0;
//         for(int i=index; i<nums.size(); i++){
//             nums[i]=temp[tempindex];
//             tempindex++;
//         }
//         for(int i=0; i<nums.size(); i++){
//             cout<<nums[i]<<" ";
//         }
//     }
// };

// int main() {
//     vector<int>nums={1,2,3,4,5,6,7};
//     Solution obj;
//     obj.LeftRotateArrayByDplace(nums,13);
//     return 0;
    
// }


// ====================================================================================
// this is the optimal approach to left rotate an array by d places
// in this the time complexity is O(2n) and space complexity is O(1)
// by using the reverse algorithm
// step 1 first reverse the 0 to d 
// step 2 then d to size
// step 3 reverse all the entire array then you get the result 




// class Solution {
// public:
//         void Rotatearray(vector<int> &nums, int d){
//             d=d%nums.size();
//             reverse(nums.begin(), nums.begin()+d);
//             reverse(nums.begin()+d,nums.end());
//             reverse(nums.begin(),nums.end());

//             for(int i=0;  i<nums.size();  i++){
//                 cout<<nums[i]<<"  ";
//             }
//         }
    
// };

// int main() {
//     vector<int>nums={1,2,3,4,5,6,7};
//     Solution obj;
//     obj.Rotatearray(nums,5);

    
// }
// ============================================================================================================