class Solution {
public:
    vector<int >topKFrequent(vector<int>& nums, int k){
    int ans;
    sort(nums.begin(),nums.end());
    multimap<int,string ,greater<int>>mp;
    vector<int> tempor;
    int temp=nums[0];
    int count=1;
    int i;
    for(i=1;i<nums.size();i++){
        if(temp==nums[i]){
            count++;
        }
        else{
            stringstream ss;
            ss<<temp;
            string t;
            ss>>t;
            mp.insert(pair<int ,string>(count, t));
            count=1;
            temp=nums[i];
        }
    }
    if(temp==nums[i-1]){stringstream ss;
            ss<<temp;
            string t;
            ss>>t;
            mp.insert(pair<int ,string>(count, t));
    }
     i=0;
    multimap<int,string> ::iterator it;

    for(it=mp.begin();i!=k;it++){
        stringstream aa;
        aa<<(*it).second;
        int aaa;
        aa>>aaa;
tempor.push_back(aaa);
i++;
    }
    return tempor;
}
};