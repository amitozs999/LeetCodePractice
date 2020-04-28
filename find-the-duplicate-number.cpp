class Solution {
public:
    int findDuplicate(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         for (int i = 1; i < nums.size(); i++) {
//             if (nums[i] == nums[i-1]) {
//                 return nums[i];
//             }
//         }
                                       //nlogn
//         return -1;
        
        if (nums.size() > 1)
	{
		int slow = nums[0];
		int fast = nums[nums[0]];
		while (slow != fast)
		{
			slow = nums[slow];
			fast = nums[nums[fast]];
		}

		fast = 0;
		while (fast != slow)
		{
			fast = nums[fast];
			slow = nums[slow];
		}
		return slow;
	}
	return -1;
    }
};