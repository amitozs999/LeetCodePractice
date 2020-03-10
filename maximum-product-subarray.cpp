class Solution {
public:
 	int maxProduct(vector<int>& nums) 
    {
        int size = nums.size(), maxProduct = nums[0];
        int maxProducts[size]{0}, minProducts[size]{0};
        maxProducts[0] = minProducts[0] = nums[0];
        for(int i = 1; i < size; ++i)
        {
            maxProducts[i] = max(maxProducts[i-1]*nums[i], max(minProducts[i-1]*nums[i], nums[i]));
            minProducts[i] = min(maxProducts[i-1]*nums[i], min(minProducts[i-1]*nums[i], nums[i]));
            maxProduct = max(maxProduct, maxProducts[i]);
        }
        return maxProduct;
    }
};