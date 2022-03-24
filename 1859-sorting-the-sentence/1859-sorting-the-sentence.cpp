class Solution {
public:
    string sortSentence(string s) {
        string temp;
        map<int ,string>m;
        for(int i=0;i<s.length();i++){
            if(s[i]==32){
                char a=temp.back();
                stringstream ss;
                ss<<a;
                int aa;
                ss>>aa;
                temp.pop_back();
                m.insert(pair<int,string>(aa,temp));
                temp="";
            }
            else{
                temp+=s[i];
            }
        }
         char a=temp.back();
                stringstream ss;
                ss<<a;
                int aa;
                ss>>aa;
                temp.pop_back();
                m.insert(pair<int,string>(aa,temp));
        map<int ,string > ::iterator itr;
        string answer="";
        for(itr=m.begin();itr!=m.end();++itr){
            answer+=itr->second;
            answer+=" ";
        }
        answer.pop_back();
        return answer;
    }
};