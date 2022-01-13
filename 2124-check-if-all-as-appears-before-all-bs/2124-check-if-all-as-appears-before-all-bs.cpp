class Solution {
public:
bool checkString(string s)
{
    // string ans;
    int count = 0;
    char ans[1];
    ans[0]='a';
    for (int i = 0; i < s.length(); i++)
    {
        if (ans[0]!= s[i])
        {
            if (count == 0)
            {
                // ans.pop_back();
                ans[0]=s[i];
                count++;
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}

};
