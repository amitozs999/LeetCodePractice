class Solution {
public:

	vector<vector<int>> threeSum(vector<int>& nums)	{
		std::sort(nums.begin(), nums.end());
		vector<vector<int>> ret;
		int len = nums.size();
		if(len<3) return ret;

		for (int i = 0; i < len - 2; ++i){
			if (i>0 && nums[i] ==nums[i-1]) continue;
			if(nums[i]+nums[i+1]+nums[i+2]>0) break;
			

			int j = i + 1, k = len - 1;
			while(j < k){
				int sum = nums[i] + nums[j] + nums[k];
				if (sum > 0) --k;
				else if (sum < 0) ++j;
				else 
				{
					ret.push_back({ nums[i], nums[j], nums[k] });
                    j++; k--;
					while(nums[j] == nums[j-1] && j < k)j++;
					while(nums[k] == nums[k+1] && j < k) k--;
				}
			}
		}
		return ret;
	}
};