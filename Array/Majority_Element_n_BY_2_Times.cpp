#include <bits/stdc++.h>
using namespace std;

// this is the brute force method in this using only the map;
// int mejorityelement(vector<int>nums){
//     int size=nums.size()/2;
//     map<int,int>mpp;
//     for(auto i: nums){
//         mpp[i]++;
//     }
//     for(auto i: mpp){
//         if(i.second>size ){
//             return i.first;
//         }
//     }
// }

// By hashing

//  int mejorityelement(vector<int>nums){
//     int size=nums.size()/2;
//     vector<int>hash(*max_element(nums.begin(),nums.end()),0);
//     for(int i=0; i<nums.size(); i++){
//         hash[nums[i]]++;
//     }
//     for(int i=0; i<hash.size(); i++){
//           if(hash[i]>size){

//             return i+5;
//           }
//     }
//     return 0;
// }

// optimal solution Mejorti voting algorithm

int mejorityelement(vector<int> nums)
{
    int count = 0;
    int element = -1;

    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)
        {
            element = nums[i];
            count = 1;
        }
        else if (element == nums[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == element)
            {
                count++;
            }
        }
        if (count > nums.size() / 2)
        {
            return element;
        }
        else
        {
            return -1;
        }
    }
}
        int main()
        {

            vector<int> nums = {1, 1, 1, 1, 2, 2, 2, 4, 4, 4, 1, 1, 1};
            cout << mejorityelement(nums);
            return 0;
        }