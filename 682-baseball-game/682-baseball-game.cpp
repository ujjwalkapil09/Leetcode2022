class Solution {
public:
    int calPoints(vector<string>& ops) {
        // vector<int>ans;
        stack<int> st;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="+"){
                int num1=st.top();
                st.pop();
                int num2=st.top();
                st.pop();
                int num3=num1+num2;
                // cout<<num3<<"num3  ";
                st.push(num2);
                st.push(num1);
                st.push(num3);
            }
            else if(ops[i]=="D"){
                int num4=st.top();
                st.push(num4*2);
            }
            else if(ops[i]=="C"){
                st.pop();
            }
            else{
                stringstream ss;
                ss<<ops[i];
                int l;
                
                ss>>l;
                st.push(l);
            }
        }
        int sum=0;
        while(!st.empty()){
            // cout<<st.top()<<" ";
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};