// approch 1-----------------------------------------------------------------
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     void findmissingnumber(vector<int>nums,int n){
//         int flage=0;
//          for(int i=1; i<=n; i++){
//             flage=0;
//             for(int j=0; j<nums.size(); j++){
//                 if(i==nums[j]){
//                     flage=1;
//                     break;
//                 }
//             }
//             if(flage==0){
//                 cout<< i;
//             }
//          }
//     }
// };

// int main() {
//     vector<int>nums={1,2,4,5};
//     Solution obj;
//     obj.findmissingnumber(nums,5);
//     return 0;
    
// }

// this is the brute force method in this method the time is O(n^2) and space is O(1)



// approch 2 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// hashing method 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   void findmissingnumber(vector<int>& nums, int n) {
    vector<int> hashArray(n + 1, 0);

    for (int i = 0; i < nums.size(); i++) {
        hashArray[nums[i]]++;
    }

    for (size_t i = 1; i <= n; i++) {
        if (hashArray[i] == 0) {
            cout << i;
            return;
        }
    }
}
};
 int main() {
    vector<int>nums={1,2,4,5};
    Solution obj;
    obj.findmissingnumber(nums,5);
    return 0;
    
}