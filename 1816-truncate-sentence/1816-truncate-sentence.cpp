#include<bits/stdc++.h>
class Solution {
public:
    string truncateSentence(string s, int k)
{
    vector<string> aa;
    string ans;
    int i = 0;
    for (i = 0; i < s.length(); i++)
    {
        if(i==s.length()-1){
            ans+=s[i];
            aa.push_back(ans);
            ans = "\0";
        }
        if (s[i] != 32)
        {
            ans += s[i];
        }
        else
        {
            ans += " ";
            aa.push_back(ans);
            ans = "\0";
        }

    }
    string pp;
    for (int j = 0; j <k; j++)
    {
        pp += aa[j];
        // cout << aa[j];
    }
        if(pp[pp.length()-1]==32){
            pp.pop_back();
        }
    return pp;
}
};