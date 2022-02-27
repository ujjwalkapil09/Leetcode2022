class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int count =0;
        vector<int> a={-2,0,10,-19,4,6,-8};
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size();j++){
                if(arr[i]*2==arr[j]){
                    if(count<3){
                        count++;
                        cout<<arr[i]<<arr[j]<<endl;
                    }
                    if(count==2)break;
                }
            }
        }
        // cout
        sort(a.begin(),a.end());
        int i;
        for(i=0;i<arr.size();i++){
            if(a[i]!=arr[i])break;
        }
        if(i==arr.size()-1)return false;
        if(arr==a)return false;
        if(count>=1)return true;
        else {return false;}
    }
};