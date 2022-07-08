class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int s=0, e=arr.size()-1;
        vector<int> ans;
        while (s<e) {
            if (arr[s]+arr[e]==target) {
                ans = {s+1, e+1};
                break;
            }
            else if (arr[s]+arr[e]>target)
                e--;
            else
                s++;
        }
        return ans;
    }
};