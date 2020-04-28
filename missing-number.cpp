class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0, s=nums.size();
    for(int i=0;i<nums.size();i++)
    {
        sum+=nums[i];
    }
    
    return (s*(s+1)/2)-sum;
    

    }
};