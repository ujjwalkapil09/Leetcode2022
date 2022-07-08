class Solution {
public:
    vector<int>maxleft(vector<int> h){
        vector<int>left;
        int maxi=h[0];
        left.push_back(maxi);
        for(int i=1;i<h.size();i++){
            maxi=max(maxi,h[i]);
            left.push_back(max(maxi,h[i]));
        }
        return left;
    }
    vector<int>maxright(vector<int> h){
        vector<int>right;
        int maxi=h[h.size()-1];
        
        right.push_back(maxi);
        for(int i=h.size()-2;i>=0;i--){
            maxi=max(maxi,h[i]);
            right.push_back(max(maxi,h[i]));
        }
        reverse(right.begin(),right.end());
        return right;
    }
    int trap(vector<int>& height) {
        vector<int> left,right,temp;
        left=maxleft(height);
        right=maxright(height);
       
        for(int i=0;i<height.size();i++){
            temp.push_back(min(left[i],right[i])-height[i]);
        }
        // for(int i=0;i<height.size();i++){
        //     temp[i]=temp[i]-height[i];
        // }
        int ans=0;
        for(auto itr: temp){
            ans+=itr;
        }
        return ans;
    }
};