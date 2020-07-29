class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count_one = 0;
        int ans  = 0;
        for(int i = 0; i < nums.size(); i++)  {
            if(nums[i] == 1)  {
                count_one++;
                ans = max(ans, count_one);
            } else {
                count_one = 0;
            }
        }
        return ans;
    }
};