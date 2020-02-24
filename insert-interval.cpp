class Solution {
public:
        
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
       
             vector<vector<int>> res;
             int i = 0;
            for( ;i < intervals.size() ; i++){

                if(intervals[i][0] < newInterval[0]) 
                    res.push_back(intervals[i]);
                   else break;
                  }
            if(res.size() == 0) res.push_back(newInterval);
        
            if(res.back()[1] < newInterval[0]){
                  res.push_back(newInterval);
            }
         else 
          if(res.back()[1] >= newInterval[0])
        {
            res.back()[1] = max(res.back()[1],newInterval[1]);
        }
       
   for( ;i < intervals.size() ;i++)
        {
            vector<int>& last = res.back();
          
            if( last[1] < intervals[i][0] )
            {
                res.push_back( intervals[i] );
            }
            else
            {
                last[1] = max( last[1], intervals[i][1] );
            }
            
        }
        
        return res;
    
        }
    
};