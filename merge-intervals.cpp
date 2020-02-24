class Solution {
public:
    static bool comparator( vector<int>& a, vector<int>& b )
    {
        return a[0] < b[0];
    }
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
  
        if( intervals.empty() )
        {
            return res;
        }
        
        if( intervals.size() == 1 )
        {
            res.push_back( intervals[0]);
            return res;
        }
        
    
        sort( intervals.begin(), intervals.end(), comparator );
        
   
        res.push_back( intervals[0] );
       
        for( int i=1;i < intervals.size() ;i++)
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