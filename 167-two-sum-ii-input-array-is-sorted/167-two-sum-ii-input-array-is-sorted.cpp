class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int last=numbers.size()-1;
        int i=0;
        vector<int> answer;
        while(i<last){
            if(numbers[i]+numbers[last]==target){
                answer.push_back(i+1);
                answer.push_back(last+1);
                return answer;
            }
            else if(numbers[i]+numbers[last]<target){
                i++;
                
            }
            else{
                last--;
            }
        }
        return answer;
    }
};