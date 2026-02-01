#include <bits/stdc++.h>
using namespace std;


// this is the basic approch of this problem in this problem the using the two forloop 
// the time complexity of this code is the O(n^2)
// and the space of the O(1);

// vector<int>two_sum(vector<int>nums,int target){

//  vector<int>result;
//     for(int i=0; i<nums.size(); i++){
//         for(int j=i+1; j<nums.size(); j++){
//             if(nums[i]+nums[j]==target)
//             {
//                 cout<<i<<j;
//                 return {i,j};}
//             break;
//         }
//     }
//     return {-1,-1};
// }

// vector<int>two_sum(vector<int>nums,int target){
//     map<int,int>mpp;
//     int i=0;


//     for(int i=0; i<nums.size();  i++){
//         int data=nums[i];
//         int more=target-data;
//         if(mpp.find(more)!=mpp.end()){
//             cout<<"{"<<mpp[more]<<" , "<<i<<"}";
//             return { mpp[more], i };
//         }
//         mpp[data]=i;
//     }

    
//     return {-1,-1};
// }




// slitely optimal solution of this problem by using sort and gready approch 

// vector<int>two_sum(vector<int>&nums,int target){

//     sort(nums.begin(),nums.end());
//     int low=0;
//     int high=nums.size()-1;

//     while(low<high){
//         if(nums[low]+nums[high]==target){
//         cout<<low<<high;
//         return {low,high};
//         }

//         if(nums[low]+nums[high]>target) {
//             high--;
//         }
//         else {
//             low++;
//         }

//     }

//     return {-1,-1};
// }

// int main() {
    
// vector<int>nums={2,7,11,9};
// two_sum(nums,9);
//     return 0;
// }