class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // brute force
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        for(int i=0;i<n;i++)
        {
            int start=intervals[i][0];
            int end=intervals[i][1];
            if(!res.empty()&&res.back()[1]>=end)
            continue;
            for(int j=i+1;j<n;j++)
            {
                if(intervals[j][0]<=end)
                end=max(end,intervals[j][1]);
            }
            res.push_back({start,end});
        }
        return res;
    }
};