class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        for (int i=0, j=0; i<nums.size(); i++) {
            if (nums[i]==0)
                continue;
            int temp = nums[j];
            nums[j] = nums[i];
            nums[i] = temp;
            j++;
        }
    }
};