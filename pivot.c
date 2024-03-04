#include <vector>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        int leftSum = 0;

        // Calculate the total sum of all elements in the array
        for (int num : nums) {
            totalSum += num;
        }

        // Iterate through the array and check for pivot index
        for (int i = 0; i < nums.size(); i++) {
            // If the left sum is equal to the total sum minus the current element and right sum, return the current index
            if (leftSum == totalSum - leftSum - nums[i]) {
                return i;
            }
            // Otherwise, update the left sum
            leftSum += nums[i];
        }

        // If no pivot index is found, return -1
        return -1;
    }
};
