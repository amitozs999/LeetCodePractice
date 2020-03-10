// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
//         int curr=0;
//         int size=nums1.size();
//         if(size==1) return;
//         if(size==0) return;
//         for(int i=size-m;i<size;i++){
            
//             nums1[i]=nums2[curr];
//             curr++;
//         }
//         sort(nums1.begin(),nums1.end());
        
//     }
// };
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
    
        while( i >= 0 && j >= 0 )
        {
            if( nums1[ i ] > nums2[ j ] )
                nums1[ k-- ] = nums1[ i-- ];
            else
                nums1[ k-- ] = nums2[ j-- ];
        }
    
        while( j >= 0 )
            nums1[ k-- ] = nums2[ j-- ];
    }
};