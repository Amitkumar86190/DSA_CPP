#include <iostream>
#include <bits/stdc++.h>
using namespace std;



// ..................................................................................................................
// this code is brute force method  in this the time comp. is the O(nlogn) and sc is the O(n)
// is approch me 1 set bana kar us me insert function se array ke elemens ko insdert kar de te h set 
//  ki property hoti h unique element store karna and sorted manner me store karna 
// to ye duplicate element ko remove kar deta h 



// class Solution {
// public:
//     void RemoveDupicate(vector<int>nums){
//         set<int>newset;
//         for(auto it: nums){
//             newset.insert(it);
//         }
//         for(auto it:newset){
//             cout<<it<<" ";
//         }
//     }
// };

// int main() {
//     vector<int> nums={100,1,1,1,1,39,37,28,99,99};
//     Solution obj;
//     obj.RemoveDupicate(nums);
//     return 0;
    
// }

// .......................................................................................................................

// this is the optimal solution of this problem 
// the time complexity of this code is the O(n) and the space is the O(1)
// is code me array ke element ko next element se compare karte h or jo different ho us ko key se replace kardete h or 
// or key ko increment kar dete h by 1 ye optimal solution h is problem ka


// class Solution{
//     public:
//           void RemoveDupicate(vector<int> nums){
//                 int key=0;
//                 for(int i=1; i<nums.size();  i++){
//                     if(nums[i]!=nums[key]){
//                         nums[key+1]=nums[i];
//                         key++;
//                     }
//                 }
//                 for(int i=0; i<key+1; i++){
//                     cout<<nums[i]<<" ";
//                 }
//         }
// };
// int main(){
//     vector<int > nums={1,1,1,2,2,3,3};
//     Solution obj;
//     obj.RemoveDupicate(nums);
//     return 0;
// }

// ............................................................................................................................
