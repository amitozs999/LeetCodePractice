class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
         vector<int> ans;
        int n = a.size();
        int f=0,l=n-1;
        while(f<l)
        {
            if(a[f]+a[l] > target)
                l--;
            else if(a[f]+a[l] < target)
                f++;
            else
            {
                ans.push_back(f+1);
                ans.push_back(l+1);
                break;
            }
            
        }
        return ans;
    }
};