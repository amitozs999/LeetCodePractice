class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int> (n));
        int p=1;
        int ro=n,col=n;
        int l=0,r=col-1,up=0,d=ro-1;
        while(l<=r && up<=d){
            for(int k=l;k<=r;k++){
               
                ans[up][k]=p++;
            }
            up++;
            for(int k=up;k<=d;k++){
                
                ans[k][r]=p++;
            }
            r--;
       
            for(int k=r;k>=l;k--){
                
                ans[d][k]=p++;
            }
            d--;
        
            for(int k=d;k>=up;k--){
              
                ans[k][l]=p++;
            }
            l++;
          
        }
        return ans;
    }
};