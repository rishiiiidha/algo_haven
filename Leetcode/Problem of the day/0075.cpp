#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n - 1;
        while (mid <= high) {
            if (nums[mid] == 2) {
                swap(nums[mid], nums[high]);
                high--;
            }else if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid=low;
            } else
                mid++;
        }
        // Time complexity : O(n)
        // Space complexity : O(1)
    }
};