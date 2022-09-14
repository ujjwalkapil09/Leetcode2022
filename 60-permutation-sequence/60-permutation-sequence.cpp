class Solution {
public:
    
    string getPermutation(int n, int k) {
        string ans="";
        int temp=0;
        int fact=1;
        vector<int> answer;
        vector<int> ds;
        for(int i=1;i<n;i++){
            fact*=i;
            ds.push_back(i);
        }
        ds.push_back(n);
        k=k-1;
        while(true){
                
                int ind=k/fact;
                ans+=to_string(ds[ind]);
                 ds.erase(ds.begin()+ind);
                if(ds.size()==0)break;
            k=k%fact;
                fact=fact/ds.size();
                
        }
        return ans;
    }
};