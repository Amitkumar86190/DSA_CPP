#include <bits/stdc++.h>
using namespace std;
// 

// Brute force method 

// it takes the O(n)+O(n)=O(2n) time for executing the code 
// and the space is O(n) for space 
// void RearrangeArray(vector<int>&nums){

//     vector<int>positive;
//     vector<int>negative;

//     for(int i=0;  i<nums.size();  i++){
//         if(nums[i]>0) positive.push_back(nums[i]);
//         else negative.push_back(nums[i]);
//     }
//     for(int i=0;  i<nums.size()/2;  i++){
//         nums[i*2]=positive[i];
//         nums[i*2+1]=negative[i];
//     }
//     for(int i=0;  i<nums.size();  i++){
//         cout<<nums[i]<<" ";
//     }

// }


// optimal solution in this approch we are using the 2 for loop 
// +ve =0; pointer 1
// -ve =1; pointer 2
// and create the new result array then 
// using the loop and chacking the element of the array if the element is >0 then insert the result array the element at index +ve
// if the element is the <0 then store the store the element at index -ve position

// the time is O(n) and space is O(n)

// void RearrangeArray(vector<int>&nums){

//     int positive=0;
//     int negative=1;

//     vector<int>result(nums.size());

//     for(int i=0;  i<nums.size();  i++){
//        if(nums[i]>0) {
//         result[positive]=nums[i];
//         positive=positive+2;
//        }
//        else{
//         result[negative]=nums[i];
//         negative=negative+2;
//        }
//     }
   
//     for(int i=0;  i<result.size();  i++){
//         cout<<result[i]<<" ";
//     }

// }

int main() {
    vector<int>nums={-1,2,-2,-1,4,1};
    RearrangeArray(nums);

    return 0;
}