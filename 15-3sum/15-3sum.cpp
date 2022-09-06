class Solution
{
    public:
        vector<vector < int>> threeSum(vector<int> &nums)
        {
            int target=0;
            set<vector<int>> answer;
            sort(nums.begin(), nums.end());
            for (int i = 0; i < nums.size(); i++)
            {
                int j = i + 1;
                int k = nums.size() - 1;
                int target_2 = target - nums[i];
                if(target==0){
                    if(i+2<nums.size()){
                        if(nums[i+1]+nums[i+2]==target_2){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[i+1]);
                        temp.push_back(nums[i+2]);
                        answer.insert(temp);
                        continue;
                    }
                    }
                    
                }
                while (j < k)
                {
                    if (nums[j] + nums[k] == target_2)
                    {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                        answer.insert(temp);
                        if(j>=k){
                            break;
                        }
                        else{
                            j++;
                            k--;
                        }
                        
                    }
                    if (nums[j] + nums[k] > target_2)
                    {
                        k--;
                    }
                    if (nums[j] + nums[k] < target_2)
                    {
                        j++;
                    }
                }
            }
            vector<vector<int>>ans;
            for(auto it: answer){
                ans.push_back(it);
            }
            return ans;
        }
};