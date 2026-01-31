#include <bits/stdc++.h>
using namespace std;


// My first Approch is sort the array using any algorithm then the time is O(nlogn) and space is according to algo
// Quick and Marge sort




// this is the my second approch in this we are doing the calculate the frequency of the 0, 1, 2 the using the loop and 
// set the values according to the frequency in this the time is one for loop for counting the frequency and one loop for 
// set the data in the array result 


// void sort012(vector<int>nums){

//     int count1=0;
//     int count2=0;
//     int count0=0;

//     for(int i=0; i<nums.size(); i++){
//         if(nums[i]==0) count0++;
//         if(nums[i]==1) count1++;
//         if(nums[i]==2) count2++;
//     }
//     int i=0;
//     for( i=0; i<count0; i++) nums[i]=0;
//     for(; i<count0+count1; i++) nums[i]=1;
//     for(; i<nums.size(); i++) nums[i]=2;

//     for(auto i: nums){
//         cout<<i<<" ";
//     }
// }


// optimal solution is dutch national flag algorithm in this we are using three pointer low , mid , high
// the time is O(n) and space is O(1)


void sort012(vector<int>& nums){
    int low=0,mid=0;
    int high=nums.size()-1;

    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            mid++;
            low++;
        }else if(nums[mid]==1){
            mid++;
        }else{
            swap(nums[mid],nums[high]);
             high--;
        }
       
    }
     for(auto i: nums){
            cout<<i<<" ";
        }
}
int main() {
    vector<int>nums={1,1,1,0,2,1,0,0,2,0};
   sort012( nums);

    return 0;
}