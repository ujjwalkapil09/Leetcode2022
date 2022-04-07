class Solution {
public:
    int lastStoneWeight(vector<int> &stones)
{
    sort(stones.begin(), stones.end());
    while (stones.size() > 1)
    {
        int ele1 = stones.back();
        stones.pop_back();
        int ele2 = stones.back();
        stones.pop_back();
        int ele3 = abs(ele1 - ele2);
        if (ele3 != 0)
        {
            stones.push_back(ele3);
        }
        if (stones.size() > 1)
            sort(stones.begin(), stones.end());
    }
    if(stones.size()==1){
        return stones.back();
    }
    return 0;
}

};