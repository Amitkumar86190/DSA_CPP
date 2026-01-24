// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> nums={10 ,9,10};
//     int first=10;
//     int second=INT_MIN;

//     for(int i=0; i<nums.size(); i++){
//         if(nums[i]>=second && nums[i]<first){
//             second=nums[i];
//         }
//     }
//     cout<<first<<"   "<<second;
//     return 0; 
// }


// new method is added



// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> nums = {2,3,5,2,1,9,6,4,10};

//     int first = INT_MIN;
//     int second = INT_MIN;

//     for(int i = 0; i < nums.size(); i++){
//         if(nums[i] > first){
//             second = first;
//             first = nums[i];
//         }
//         else if(nums[i] < first && nums[i] > second){
//             second = nums[i];
//         }
//     }

//     cout << first << " " << second;
//     return 0;
// }
