class Solution {
public:
   int minSubArrayLen(int s, vector<int>& nums) {
    vector<int> sums(nums.size() + 1, 0);
    partial_sum(nums.begin(),nums.end(), sums.begin()+1);
    int n = nums.size(), minlen = INT_MAX;
    for (int i = 1; i <= n; i++) { 
        if (sums[i] >= s) {
            auto p = upper_bound(sums.begin(), sums.begin()+i, sums[i] - s);
            if (p != sums.end()) 
                minlen = min(minlen, i - (int)(p-sums.begin()) + 1);
        }
    }
    return minlen == INT_MAX ? 0 : minlen;
}
};

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int l = 0, r = 0, n = nums.size(), sum = 0, len = INT_MAX;
        while (r < n) {
            sum += nums[r];
            r++;
            while (sum >= s) {
                len = min(len, r - l);
                sum -= nums[l];
                l++;
            }
        }
        return len == INT_MAX ? 0 : len;
    }
};