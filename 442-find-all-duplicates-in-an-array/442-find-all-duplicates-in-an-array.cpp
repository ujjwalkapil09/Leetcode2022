class Solution {
public:
    vector<int> findDuplicates(vector<int>& v) {
       int min=0;
        vector<int> answer;
int max=0;
for(auto itr:v)
{
    if(min>itr){
        min=itr;

    }
    if(max<itr){
        max=itr;
    }
}
int *arr;
arr=new int[max-min+1];
for(int i=0;i<max-min+1;i++){
    arr[i]=0;
}
for(auto itr: v)
{
    arr[itr-min]++;
    if(arr[itr-min]>1){
        answer.push_back(itr);
    }
}
        return answer;
    }
};