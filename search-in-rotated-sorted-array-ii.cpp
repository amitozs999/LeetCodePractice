class Solution {
public:
    bool search(vector<int>& A,  int target) {
        int l = 0, r = A.size() - 1;
        while(l <= r) {
                while (l < r && A[l] == A[l + 1]) {
                l++;
            }
            while (l < r && A[r] == A[r - 1]) {
                r--;
            }
            int m = (l + r) / 2;
            if (A[m] == target)
                return true;
            else if (A[l] <= A[m]) { 
                if (A[l] <= target && target < A[m])
                    r = m - 1;
                else 
                    l = m + 1;                               
            } else {
                if (A[m] < target && target <= A[r]) 
                    l = m + 1;
                else 
                    r = m - 1;
            }
        }
        
        return false;
    }
};