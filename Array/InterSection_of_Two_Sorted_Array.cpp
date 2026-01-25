#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// this is the brute force method the time is O(n*m)
//  the space is O(m)

// class Solution {
// public:
//     void intersection(vector<int>arr1,vector<int>arr2){
//         vector<int>visited(arr2.size(),0);
//         vector<int>interSection;
//         for(int i=0; i<arr1.size();  i++){
//             for(int j=0; j<arr2.size();  j++){
//                 if(arr1[i]==arr2[j] && visited[j]==0){
//                     interSection.push_back(arr1[i]);
//                     visited[j]=1;
//                     break;
//                 }
//             }
//         }
//         for(int i: interSection){
//             cout<< i<<" ";
//         }
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> arr1={1,1,1,2,3,4,5,6};
//     vector<int> arr2={1,1,2,4,5,6,9};
//     obj.intersection(arr1,arr2);
//     return 0;
    
// }

// better approch time is same but the difference is space but it work on the >=0 elements only

// class Solution {
// public:
//     void intersection(vector<int>arr1,vector<int>arr2){
       
//         vector<int>interSection;
//         for(int i=0; i<arr1.size();  i++){
//             for(int j=0; j<arr2.size();  j++){
//                 if(arr1[i]==arr2[j] && arr2[j]>-1){
//                     interSection.push_back(arr1[i]);
//                     arr2[j]=-1;
//                     break;
//                 }
//             }
//         }
//         for(int i: interSection){
//             cout<< i<<" ";
//         }
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> arr1={1,1,1,2,3,4,5,6};
//     vector<int> arr2={1,1,2,4,5,6,9};
//     obj.intersection(arr1,arr2);
    
//     return 0;
    
// }


// =================================================================================================
// optimal solution finding  the time is O(n+m)
//  no extra space o(1);

// class Solution {
// public:
//     void intersection(vector<int>arr1,vector<int>arr2){

//         vector<int> result;

//         int i=0, j=0;
       
//         while(i<arr1.size() && j<arr2.size()){
//             if(arr1[i]==arr2[j]){
//                 result.push_back(arr1[i]);
//                 i++;
//                 j++;
//             }else if(arr1[i]>arr2[j]){
//                 j++;
//             }else{
//                 i++;
//             }
//         }

//         for(int it: result){
//             cout<< it<<" ";
//         }

//     }
// };

// int main() {
//     Solution obj;
//     vector<int> arr1={1,1,1,2,3,4,5,6};
//     vector<int> arr2={1,1,2,4,5,6,9};
//     obj.intersection(arr1,arr2);
//     return 0;
    
// }