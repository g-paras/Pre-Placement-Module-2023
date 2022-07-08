class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0, h=nums.size(), mid;
        while (l < h) {
            mid = l + (h-l)/2;
            if (nums[mid] >= target)
                h = mid;
            else
                l = mid+1;
        }
        return l;
    }
};