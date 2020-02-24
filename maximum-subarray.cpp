class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int size=a.size();
        int max= INT_MIN, curr = 0; 
  
    for (int i = 0; i < size; i++) 
    { 
        curr = curr + a[i]; 
       max=std::max(max,curr);
        if(curr<=0)
        {
            curr=0;
        }
    } 
    return max; 
           }
};


//Whenever the sum is greater than ans, replace ans. Whenever sum is less than zero, reset //sum to 0 since any number plus a negative number cannot exceed itself.