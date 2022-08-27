class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        int sizee = arr.size();
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < sizee; i++)
    {
        for (int j = i + 1; j < sizee; j++)
        {
            int first = j + 1;
            int last = sizee - 1;
            long long int target_2 =(long long int ) target -( arr[i] + arr[j]);
            
            while (first < last)
            {
                long long int targetcheck=(arr[first] + arr[last]);
                if (target_2 ==targetcheck )
                {
                    vector<int> an(4, 0);
                    an[0] = arr[i];
                    an[1] = arr[j];
                    an[2] = arr[first];
                    an[3] = arr[last];
                    ans.push_back(an);
                    while (first < last && arr[first] == an[2])
                        first++;
                    while (first < last && arr[last] == an[3])
                        --last;
                
            }
            else if (target_2 > targetcheck)
            {
                first++;
            }
            else
            {
                last--;
            }
        }
        while(j+1<sizee&& arr[j+1]==arr[j])j++;
    }
    while(i+1<sizee && arr[i+1]==arr[i])i++;
}
return ans;
    }
};