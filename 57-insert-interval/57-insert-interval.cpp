class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> merged;
        if(intervals.size()==0){
            return merged;
        }
        vector<int> temp=intervals[0];
        for(auto it: intervals){
            if(it[0]<=temp[1]){
                temp[1]=max(it[1],temp[1]);
            }
            else{
                merged.push_back(temp);
                temp=it;
            }
        }
        merged.push_back(temp);
        return merged;
    }
};