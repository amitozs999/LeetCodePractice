class Solution {
public:
   vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> ret (nums.size(), 1);
    for(int i = 1; i < nums.size(); i++)
        ret[i] *= nums[i - 1] * ret[i - 1];
    int tmp = 1;
    for(int i = nums.size() - 2; i >= 0; i--) {
        tmp *= nums[i + 1];
        ret[i] *= tmp;
    }
    return ret;
}
};