// problem link - https://leetcode.com/problems/next-permutation/
class Solution{
public:
    void nextPermutation(vector<int>& nums) {
        int index = -1;
        int n = nums.size();

        // Step 1: Find the first pair where nums[i] < nums[i + 1]
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }

        // If no such pair is found, reverse the entire array
        if (index == -1) {
            reverse(nums.begin(), nums.end());
        } else {
            // Step 2: Find the first element from the end that is greater than nums[index]
            for (int i = n - 1; i > index; i--) {
                if (nums[i] > nums[index]) {
                    swap(nums[i], nums[index]);
                    break;   
                }
            }
            // Step 3: Reverse the elements after index to get the next lexicographical order
            reverse(nums.begin() + index + 1, nums.end());
        }
    }
};