// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
        
//         // nums= 1,9,3,4,5,6,7
//         //If k%nums.size()==0, you should do nothing for the array.
//          if (nums.empty() || (k %= nums.size()) == 0) return;
//         k %=nums.size();                            //3
//         reverse(nums.begin(), nums.end());         // 7,6,5,4,3,9,1
//         reverse(nums.begin(), nums.begin()+k);    // 5,6,7,4,3,9,1
//         reverse(nums.begin()+k, nums.end());     //5,6,7,1,9,3,4
//     }
// };
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (nums.empty() || (k %= nums.size()) == 0) return;
        int n = nums.size();
        for (int i = 0; i < n - k; ++i) {
            nums.push_back(nums[0]);
            nums.erase(nums.begin());
        }
    }
};