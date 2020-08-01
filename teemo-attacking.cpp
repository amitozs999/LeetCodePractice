class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int len = timeSeries.size();
        if (!len) return 0;
        int result = duration;
        for (int i = 1; i < len; i++) {
            result += min(duration, timeSeries[i] - timeSeries[i - 1]);
        }
        return result;
    }
};