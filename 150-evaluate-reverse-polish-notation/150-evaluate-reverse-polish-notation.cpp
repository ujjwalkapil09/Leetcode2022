class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int answer;
        
        for(int i=0;i<tokens.size();i++){
            int temp;
            int num1;
            int num2;
            int input;
            if(tokens[i]=="+"){
                num1=st.top();
                st.pop();
                num2=st.top();
                st.pop();
                answer=num1+num2;
                st.push(answer);
                
            }
            else if(tokens[i]=="-"){
                num1=st.top();
                st.pop();
                num2=st.top();
                st.pop();
                answer=num2-num1;
                st.push(answer);
            }
            else if(tokens[i]=="*"){
                num1=st.top();
                st.pop();
                num2=st.top();
                st.pop();
                answer=num1*num2;
                st.push(answer);
            }
            else if(tokens[i]=="/"){
                num1=st.top();
                st.pop();
                num2=st.top();
                st.pop();
                answer=num2/num1;
                st.push(answer);
                // cout<<num1<<num2;
            }
            else{
                stringstream ss;
                ss<<tokens[i];
                ss>>input;
                st.push(input);
            }
        }
        if(!st.empty()){
            return st.top();
        }
        return answer;
    }
};