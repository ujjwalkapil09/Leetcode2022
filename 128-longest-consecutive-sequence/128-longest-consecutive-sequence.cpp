class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> hashset;
        for(int it:nums){
            hashset.insert(it);
        }
        int longest_steak=0;
        for(auto num: nums){
            if(!hashset.count(num-1)){
                int currentsteak=1;
                int current_num=num;
                while(hashset.count(current_num+1)){
                    current_num+=1;
                    currentsteak++;
                }
                longest_steak=max(longest_steak,currentsteak);
            }
        }
               return longest_steak;
    }
};