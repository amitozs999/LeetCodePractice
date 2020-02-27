// class Solution {
// public:
//     //two pass (2times iterate)
//     void sortColors(vector<int>& nums) {
//         vector<int> colors(3);
//         for (int num : nums) ++colors[num];
//         int curr=0;
//         for (int i = 0; i < 3; ++i) {
//             for (int j = 0; j < colors[i]; ++j) {
//                 nums[curr++] = i;
//             }
//         }
//     }
// };
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0, right = (int)nums.size() - 1, cur = 0;
        while (cur <= right) {
            if (nums[cur] == 0) {
                swap(nums[cur++], nums[left++]);
            } else if (nums[cur] == 2) {
                swap(nums[cur], nums[right--]);
            } else {
                ++cur;
            }
        }
    }
};