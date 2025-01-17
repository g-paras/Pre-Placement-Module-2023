class Solution {
public:
    int firstBadVersion(int n) {
        int l=1, h=n, mid;

        while (l < h) {
            mid = l + (h-l)/2;
            if (isBadVersion(mid))
                h = mid;
            else 
                l = mid+1;
        }
        
        return h;
    }
};