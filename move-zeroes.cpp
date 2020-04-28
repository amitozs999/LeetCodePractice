class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int j=0;
        int n=nums.size();
       
        
        for(int i=0;i<n;i++)
        {
            
            if(nums[i]){
              
                nums[j++]=nums[i];
            }
            
        }
        fill(nums.begin()+j, nums.end(), 0);
        
    }
};