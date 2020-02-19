class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int min_diff=INT_MAX;
        int curr_diff;
        for(int i=0;i<n;i++){
            int x=nums[i],l=i+1,r=n-1;
            int prev_diff=INT_MAX;
            while(l<r){
                curr_diff = nums[l]+nums[r]+x-target;
              
                if(abs(curr_diff) < abs(prev_diff))
                    prev_diff = curr_diff;
                
                if(prev_diff==0)
                    return target;
                
                    if(curr_diff<0)
                        l++;
                    else
                        r--;
                
            }
            if(abs(min_diff) > abs(prev_diff))
                min_diff = prev_diff;        
        }
        return min_diff+target;
    }
};