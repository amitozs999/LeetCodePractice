class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        return majorityElement(nums,3);
        //  return majorityElement(nums,2)[0]; for >n/2
    }
    vector<int> majorityElement(const vector<int>& nums, int k) {
        vector<int>maj(k - 1, 0);
        vector<int>count(k - 1, 0);
        for (auto x : nums) {
            bool find = false;
            bool flag = false;//
            for (int i = 0; i < maj.size(); i++) {
                if (maj[i] == x) {
                    count[i]++;
                    find = true;
                    flag = true;
                    break;
                }
            }
            if (!find) {
                for (int i = 0; i < maj.size(); i++) {
                    if (count[i] == 0) {
                        count[i] = 1;
                        maj[i] = x;
                        flag = true;
                        break;
                    }
                }
            }
            if (!flag) {
                for (int i = 0; i < maj.size(); i++) {
                    count[i]--;
                }
            }
        }
        for (int i=0;i<count.size();i++)
            count[i] = 0;
        for (auto x : nums) {
            for (int i = 0; i < maj.size(); i++) {
                if (x == maj[i]) {
                    count[i]++;
                    break;
                }
            }
        }
        vector<int>res;
        for (int i = 0; i < maj.size(); i++) {
            if (count[i] > nums.size() / k)
                res.push_back(maj[i]);
        }
        return res;
    }
};