class Solution {
public:
//     vector<int> getRow(int rowIndex) {
        
//         vector<vector<int>> res;
        
//         for (int i = 1; i <= 34; i++)
//         {
//             vector<int> level(i, 1);
            
//             for (int j = 1; j < i - 1; j++)
                
//                 //we have taken index of res as i-2 because 
//                 //intially we have started our for loop from i=1 to numrow
//                 //but after it row is push back to res its index again start from 0
//                 level[j] = res[i-2][j-1] + res[i-2][j];
            
//             res.push_back(level);
//         }

//         return res[rowIndex];
        
//     }
    vector<int> getRow(int k) {
    vector<int>answer(k+1,0);
    
    for(int i=0;i<=k;i++){
        answer[k]=1;
        for(int j=k-1;j>0;j--){
            answer[j] += answer[j-1];
        }
        answer[0]=1;
    }
    return answer;
}
};