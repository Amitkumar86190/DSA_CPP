#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void unionArray(vector<int> arr1, vector<int> arr2) {
        vector<int> unionarray;

        int i = 0, j = 0;
        int n = arr1.size();
        int m = arr2.size();

        while (i < n && j < m) {

            if (arr1[i] < arr2[j]) {
                if (unionarray.empty() || unionarray.back() != arr1[i])
                    unionarray.push_back(arr1[i]);
                i++;
            }
            else if (arr1[i] > arr2[j]) {
                if (unionarray.empty() || unionarray.back() != arr2[j])
                    unionarray.push_back(arr2[j]);
                j++;
            }
            else { // equal
                if (unionarray.empty() || unionarray.back() != arr1[i])
                    unionarray.push_back(arr1[i]);
                i++;
                j++;
            }
        }

        while (i < n) {
            if (unionarray.empty() || unionarray.back() != arr1[i])
                unionarray.push_back(arr1[i]);
            i++;
        }

        while (j < m) {
            if (unionarray.empty() || unionarray.back() != arr2[j])
                unionarray.push_back(arr2[j]);
            j++;
        }

        for (int x : unionarray)
            cout << x << " ";
    }
};

int main() {
    vector<int> arr1 = {1,1,1,2,3,4,5,5};
    vector<int> arr2 = {1,1,2,3,4,4,4,4,5};
    Solution obj;
    obj.unionArray(arr1, arr2);
    return 0;
}
